import * as React from 'react';

export default class Greet extends React.Component {
  render() {
    return (
      <div id="container">
        <h2>TODO App</h2>
        <TodoList />
      </div>
    );
  }
}
