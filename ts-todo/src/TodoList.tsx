import * as React from "react"
import { Todo } from "./types"

interface State {
  todos: Todo[]
}

interface Props {
  todos: Todo[],
  onAdd: () => void,
  onToggle: () => void
}

export const initialState: State = {
  todos: [
    { id: 1, text: "hola", completed: false },
    { id: 3, text: "mundo", completed: true },
  ],
}

enum ActionTypes {
  ADD_TODO = "ADD_TODO",
  TOGGLE_TODO = "TOGGLE_TODO",
}

interface AddTodoAction {
  type: ActionTypes.ADD_TODO
  value: string
}

interface ToggleTodoAction {
  type: ActionTypes.TOGGLE_TODO
  value: number
}

type Action = AddTodoAction | ToggleTodoAction

let refId = 0

function mkTodo(text: string): Todo {
  return { id: refId++, text, completed: false }
}

export function reducer(state: State, action: Action): State {
  switch (action.type) {
    case ActionTypes.ADD_TODO:
      return {
        todos: [mkTodo(action.value), ...state.todos],
      }
    case ActionTypes.TOGGLE_TODO:
      return {
        todos: state.todos.map(
          t => (t.id === action.value ? { ...t, completed: !t.completed } : t)
        ),
      }
    default:
      return state
  }
}

function TodoListComponent ({todos, onAdd, onToggle}: Props) {
  return (
    <ul>
    </ul>
  )
}

function mapStateToProps ({ todos } : State) {
  return { todos }
}
