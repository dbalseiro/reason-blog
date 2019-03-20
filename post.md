# IDEAS

- What is ReasonML
  - History of the language
  - OCaml
- Functional Stuff
  - Type system
    - Type inference
    - Differences with typescript
  - Inmutability
    - Mutable
    - Imperative functions
  - Functions
    - Currying
    - Recursive functions
    - Pattern Matching / Destructuring
    - Parametric polimorphism
- Reason React
  - JSX
  - Bindings
  - JS Interop

# Working Title

## Fun Functional Programming with ReasonML

### What is ReasonML?

In its [homepage](https://reasonml.github.io/en/) they say that Reason
_lets you write simple, fast and quality type safe code while leveraging both the JavaScript & OCaml ecosystems._

I guess you all know what _JavaScript_ is (right?). _OCaml_ is a **mature (over 20 years), functional** language with
a strong type system and an awesome type inference engine. The _OCaml_ compiler is fast (compiles under the millisecond [reference needed]) and the language
has an effective metaprogramming system that allows to extend the language in many ways.

ReasonML is an OCaml dialect that resembles JS,
but it is not JS and neither is a superset of javascript (like typescript). it is an entirely new language.
The language was created at Facebook, and they migrated the _Messenger_ codebase to ReasonML [cittion needed] so the language is "Production Tested"

Reason files are transformed to OCaml ASTs first and then transpiled to JS using BucleScript. BuckleScript is an OCaml to JS compiler created at Bloomberg that let them create their UI with OCaml. Buclescript is also fact and compiles to a decently human-readable Javascript.

[GRAPHIC]

Since ReasonML can interop with JS, so it's possible to use any library from the JS ecosystem. There are many bindings for the most popular JS libraries (including React)
but it's easy to create your own bindings.

### The Type System ?

### ReasonReact Example?

The current trend in the JS world is to use frameworks that enhace JS type system (TypeScript, Flow) or give JS a more functional flavor (Ramda, Sanctuary)
Reason is a language that come with both out of the box
