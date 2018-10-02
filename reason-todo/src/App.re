let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div id="container" >
      <h2> (ReasonReact.string("TODO App")) </h2>
      <TodoList />
    </div>,
};
