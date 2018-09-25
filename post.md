# IDEAS

* What is ReasonML
    * History of the language
    * OCaml
* Functional Stuff
    * Type system
      * Type inference
      * Differences with typescript
    * Inmutability
      * Mutable
      * Imperative functions
    * Functions
      * Currying
      * Recursive functions
      * Pattern Matching / Destructuring
      * Parametric polimorphism
* Reason React
    * JSX
    * Bindings
    * JS Interop


# Working Title

## Functional Programming with ReasonML

### What is ReasonML

In its [homepage](https://reasonml.github.io/en/) they say that Reason
_lets you write simple, fast and quality type safe code while leveraging both the JavaScript & OCaml ecosystems._
let's start by the end of that sentence. What is that _OCaml_ thing? _OCaml_ is a **mature (over 20 years), functional** language with
a strong type system and an awesome type inference engine. The OCaml compiler is fast (absurdly fast) and the language
has an effective metaprogramming system that allows to extend the language in many ways. 

ReasonML is an OCaml dialect that resembles JS (and supports JSX!!), but it is not JS nor is a superset of javascript. In fact, Reason files
are first transformed to OCaml ASTs first and then transpiled to JS with Buclescript.

ReasonML can interop with JS, so it's possible to use any library from the JS ecosystem. There are many bindings for the most popular JS libraries
but it's easy to create your own bindings for any library in `npm`

Backed by Facebook

### Why should I care?

The current trend in the JS world is to use frameworks that enhace JS type system (TypeScript, Flow) or give JS a more functional flavor (Ramda, Sanctuary)
Reason is a language that come with both out of the box

### Shut up and give me an example

I'm thinking about give an example in reason and the same in typescript... point all the differences (type inference mainly) and benchmark them
