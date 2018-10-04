import * as React from "react"
import { Provider } from "react-redux"
import { createStore } from "redux"
import { initialState, reducer, TodoList } from "./TodoList"

const store = createStore(reducer, initialState)

export default class App extends React.Component {
  public render() {
    return (
      <div id="container">
        <h2> TODO App </h2>
        <Provider store={store}>
          <TodoList />
        </Provider>
      </div>
    )
  }
}
