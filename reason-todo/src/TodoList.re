open Types;

type state = list(todo);

let initialState = (_) => [];

type action =
  | AddTodo(string)
  | ToggleTodo(int);

let reducer = (action, state) =>
  switch (action) {
  | AddTodo(text) =>
    ReasonReact.Update([
      {id: List.length(state) + 1, text, completed: false},
      ...state,
    ])
  | ToggleTodo(id) =>
    ReasonReact.Update(
      state
      |> List.map(t =>
           if (t.id == id) {
             {...t, completed: ! t.completed};
           } else {
             t;
           }
         ),
    )
  };

let render = ({ReasonReact.state, ReasonReact.send}) =>
  <div>
    <TodoAdd onAdd=(text => send(AddTodo(text))) />
    <ul>
      (
        List.map(
          todo =>
            <TodoItem
              todo
              key=(string_of_int(todo.id))
              onClick=(id => send(ToggleTodo(id)))
            />,
          state,
        )
        |> Array.of_list
        |> ReasonReact.array
      )
    </ul>
  </div>;

let component = ReasonReact.reducerComponent("TodoList");

let make = _children => {...component, initialState, reducer, render};
