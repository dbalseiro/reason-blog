open Types;

let component = ReasonReact.statelessComponent("TodoItem");

let style = completed =>
  if (completed) {
    ReactDOMRe.Style.make(~textDecoration="line-through", ());
  } else {
    ReactDOMRe.Style.make(~fontWeight="bold", ());
  };

let make = (~todo, ~onClick, _) => {
  ...component,
  render: _self =>
    <li onClick=((_) => onClick(todo.id)) style=style(todo.completed)>
      (ReasonReact.string(todo.text))
    </li>,
};
