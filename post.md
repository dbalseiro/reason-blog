## ReasonML vs Typescript

TypeScript and ReasonML are two technologies that bring type safety to 
JavaScript. We will explore them.

This is not a how to program tutorial nor it is an TODO tutorial of the
languages... We aim to benchmark both technologies and point out the
differences...

### What is ReasonML?

It is a new language created byFacebook and according to its  
[homepage](https//reasonml.github.io/en/) _Reason lets you write simple, fast
and quality type safe code while leveraging both the JavaScript & OCaml ecosystems._

Let's start by the end that sentence. What is _OCaml_? _OCaml_ is a **mature (over
20 years), functional language with a strong type system and an awesome type
inference engine**.

The OCaml compiler is fast (absurdly fast) and the language has an effective
metaprogramming system that allows to extend the language in many ways. 

ReasonML is an OCaml dialect that resembles JS (and supports JSX!!), but it is
not JS nor is a superset of javascript it is an entirely new language. In fact
Reason files are first transformed to OCaml ASTs first and then transpiled to
JS with Buclescript.

ReasonML can interop with JS, so it's possible to use any library from the JS
ecosystem. There are many bindings for the most popular JS libraries but it's easy
to create your own bindings for any library in `npm`

### What about Typescript?

TypeScript is a superset of javascript created by Microsoft. The syntax is tha
same as javascript but includes type anotations to make static check to the code

TypeScript can interop with javascript (after all is a superset of the language)
but you'll need the types binfing.  

### Shut up and give me an example
