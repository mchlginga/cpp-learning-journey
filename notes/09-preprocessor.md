# Introduction to the Preprocessor

a tool that processes code before compilation.

handles directives (commands starting with #).

## Common Preprocessor Directives

- #include → Inserts header files.

- #define → Defines macros (constants or inline code).

- #ifndef, #define, #endif → Prevents multiple inclusions of a file (header)

- #pragma once → Alternative to header guards.


## Best Practices and Tips

1. Use #pragma once for simpler header file protection.

2. Prefer const over #define for constants (type safety).

3. Only include necessary headers to reduce compilation time.