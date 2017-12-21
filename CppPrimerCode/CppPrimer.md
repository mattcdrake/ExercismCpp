# C++ Primer by Lippmann et. al.

## Ch. 1: Getting Started

- Running the compiler from the command line:
`C:\Users\me\Programs> cl /EHsc prog.cpp`

### First look at I/O
- C++ standard library provides I/O
- The `iostream` library have types `istream` and `ostream` that read from & write to input devices
- `cin` is referred to as standard input
- `cout` is standard output
- `cerr` is for warning and error messages
- `clog` is for info about the program's execution
- In `#include <iostream>`, "iostream" refers to a header
    - You must use the associated header to use a library feature
    - `#include` directives must exist outside of a function
- `<<` is the output operator
    - Takes two operands. Left-hand operand must be an ostream object and the right-hand operand must be a value to print.
- `endl` is a 'manipulator' that effectively ends the current line and flushes the _buffer_ associated with that device
- A **namespace** is a declarative region that provides a scope to the identifiers inside it.
- `::` is the scope resolution operator
- `>>` input operator takes an istream as the left-hand operand and stores what was read in the right-hand object. Returns the left-hand operand as the result.

## Ch. 2: Variables and Basic Types

### Primitives

- Includes arithmetic types and `void`  
- `int`, `long`, and `long long` are _at least_ as large as `short`, `int`, and `long` respectively
    - Depends on compiler
- Integral types are 'signed' or 'unsigned'
    - 'Signed' can represent negative or positive numbers
    - 'Unsigned' can only represent numbers greater than or equal to 0
    - `int`, `short`, `long`, and `long long` are all signed by default
        - Can be made unsigned by adding `unsigned` to the beginning of the variable declaration
- `char`s have three types: `char`, `signed char`, and `unsigned char`
    - There are only two representations (signed and unsigned) and plain `char` uses one of the two, depending on the compiler

### Type Conversions

- Type conversions happen automatically when using an object of one type where an object of another type is expected
- Assigning out of range values to an object of unsigned type results in the remainder of the value mod the the number of values the target type holds
- Assigning out of range values to signed types are _undefined_
