open Types;

let component = ReasonReact.statelessComponent("TodoItem");

let itemClass = completed => completed ? "completed" : "active";

let make = (~todo, ~onClick, _) => {
  ...component,
  render: _self =>
    <li
      onClick=((_) => onClick(todo.id))
      className=(itemClass(todo.completed))>
      (ReasonReact.string(todo.text))
    </li>,
};
