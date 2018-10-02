open Types;

type state = list(todo);

let initialState = (_) => [];

type action =
  | AddTodo(string)
  | ToggleTodo(int);

let refId = ref(0);

let nextId = () => {
  refId := refId^ + 1;
  refId^;
};

let mkTodo = text => {id: nextId(), text, completed: false};

let reducer = (action, state) =>
  switch (action) {
  | AddTodo(text) => ReasonReact.Update([mkTodo(text), ...state])
  | ToggleTodo(id) =>
    ReasonReact.Update(
      List.map(t => t.id == id ? {...t, completed: ! t.completed} : t, state),
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
