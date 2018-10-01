let make = (~onAdd, _) => {
  ...ReasonReact.reducerComponent("TodoAdd"),
  initialState: (_) => "",
  reducer: (newState, _) => ReasonReact.Update(newState),
  render: self =>
    <div>
      <form onSubmit=(evt => evt |> ReactEvent.Form.preventDefault)>
        <input
          type_="text"
          onChange=(evt => (evt |> ReactEvent.Form.target)##value |> self.send)
        />
        <input type_="submit" onClick=((_) => onAdd(self.state)) />
      </form>
    </div>,
};
