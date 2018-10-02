import { Todo } from './types';

interface State {
  todos: Todo[]
}

const initialState: State = { todos: [] }

let refId = 0;

const mkTodo: Todo = (text: string) => { id: refId++, text, completed: false }
