import Todo from '../models/Todo';

let nextId = 0;

export enum ActionTypes {
  ADD_TODO = '[todos] ADD_TODO',
  TOGGLE_TODO = '[todos] TOGGLE_TODO'
}

export interface AddTodoAction { 
  type: ActionTypes.ADD_TODO, 
  payload: { todo: Todo }
}

export interface ToggleTodoAction {
  type: ActionTypes.TOGGLE_TODO,
  payload: { todoId: number }
}

export function addTodo(text: string): AddTodoAction {
  return {
    type: ActionTypes.ADD_TODO,
    payload: {
      todo: {
        id: nextId++,
        text: text,
        completed: false
      }
    }
  }
}

export function toggleTodo(todoId: number): ToggleTodoAction {
  return {
    type: ActionTypes.TOGGLE_TODO,
    payload: { todoId }
  }
}

export type Action = AddTodoAction | ToggleTodoAction
