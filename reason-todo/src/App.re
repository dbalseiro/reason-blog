[%bs.raw {|require('./App.css')|}];

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div style=(ReactDOMRe.Style.make(~margin="10px", ()))> <h2> (ReasonReact.string("TODO App")) </h2> <TodoList /> </div>,
};
