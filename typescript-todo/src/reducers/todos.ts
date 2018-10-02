import { Action, ActionTypes } from '../actions/todos';
import Todo from '../models/Todo'

export interface State {
  todos: Todo[]
}

export const initialState: State = {
  todos: []
}

export function reducer(action: Action, state: State = initialState) {
  switch (action.type) {
    case ActionTypes.ADD_TODO: {
      return {
        todos: [action.payload.todo, ...state.todos]
      }
    }
    case ActionTypes.TOGGLE_TODO: {
      return {
        todos: state.todos.map(
          t => t.id === action.payload.todoId ? {...t, completed: !t.completed} : true
        )
      }
    }
    default: return state
  }
}
