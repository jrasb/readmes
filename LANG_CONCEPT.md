# Programming language concept

- [Programming language concept](#programming-language-concept)
  - [Semicolons](#semicolons)
  - [Variables](#variables)
  - [Types](#types)
  - [Arrays](#arrays)
  - [Functions](#functions)
  - [Operation order](#operation-order)
  - [The Main Function](#the-main-function)
  - [Comments](#comments)
  - [Key Words](#key-words)
  - [Predeclared Functions](#predeclared-functions)

## Semicolons

Semicolons are used to end statements in code, just like in most programming languages.

## Variables

Variables will be declared with a prefix defining the type of the variable,
and following that the rest of the variable name.

## Types

**TYPE** | **PREFIX** | **EXPLANATION**
---|---|---
boolean | b | `true` or `false`
string | s | ``` anything in between ", ', or ` ```
integer | i | Whole numbers
float (double precision OOB) | f | Floating point numbers (64 bit)
complex | c | complex numbers with that make use of i (double float values)

## Arrays

An array is declared using the square brackets, where in an array only values of the type of array are allowed to be stored.

Example: `iArr = [1, 23, 65];`

Arrays can be declared without any value, but with the program still knowing it's an array.

Example: `iArr = [];`

And an example of an error:
`iArr = [1, 5.4, 3.14];`

## Functions

A function is declared similarly to a type by the use of the `f` prefix in front of the function name.

Example: `fFuncName;`

Functions have their body declared in between the : after the function name, and the end keyword

Example:
```
fFunctionName:

# Code here

end;
```

A function can be declared beforehand so that it is stored in memory, and then expanded later on if the user desires

Example:
```
fFuncName;

fMain

fFuncName;

end;

fFuncName:

# code here

end;
```

Functions can take arguments by adding them between braces

Example: `fFuncName(iFoo, sBar);`

This puts them in the "top" scope in that function, and allows them to be used for whatever the function needs them to.

If a function that doesn't take any arguments like `fFunctionName;` will return an error if the function is given arguments anyway.

Functions can be given return values by using the `return`
keyword, which will return a value in it's respected type

Example:
```
fAdd(a, b):

return (+ a b);

end;
```

## Operation order

As seen in the example above, the operations executed in ConceptLang, are written with the so-called 
["Polish notation"](https://en.wikipedia.org/wiki/Polish_notation), which puts the operator first, and all items used in the operation afterwards in the correct order. This also applies to using functions, if those require arguments.

Example:

```
fAdd(a, b):

return (+ a b);

end;

fMain:

iFoo = fAdd 2 6;

print iFoo;

end;
```

## The Main Function

The main function is a reserved key function that is what executes when the code is run. This function can be declared only once.

## Comments

If a line is a comment is determined by if the line begins with a # or not as seen in a few examples above.

Comment blocks are made in a similar way as Ruby by using the =.

Example:
```
# This is a commented line
# This is also a commented line

=
This is a comment block!
It will go on until the next equals sign.
This equals sign doesn't have to be on a separate line,
but it sure as hell improves visibility!
=
```

## Key Words

**KEY WORD** | **EXPLANATION**
---|---
`#` | single line comment
`=` | (only as first sign of the line) multi line comment begin or end
`[ and ]` | start and end of array
`( and )` | start and end of arguments for functions, parentheses in a mathematical sense
`fMain` | reserved main function which is what the code looks for when running, contains the whole program
`:` | function begin declaration
`end` | function end declaration
`;` | statement end declaration

## Predeclared Functions

**FUNCTION** | **EXPLANATION**
---|---
`+` | Arithmetic addition
`-` | Arithmetic subtraction
`*` | Arithmetic multiplication
`/` | Arithmetic division
`=` | Equals
`==` | Comparison
`~` | Bitwise NOT
`&` | Bitwise AND
`\|` | Bitwise OR
`^` | Bitwise XOR
`<<` | Bitwise left shift
`>>` | Bitwise right shift
`string` | String typecast
`integer` | Integer typecast (anything which isn't a number will be ignored)
`boolean` | Boolean typecast (anything but 0 will be true)
`float` | Float typecast (just as integer will ignore everything that isn't a number)
`complex` | Complex typecast (typecasting complex numbers will take strings such as "+ 23 24i" and transform them into the complex value of + 23 24i. This also works with integers and floats, but will simply put 0 in place of the complex number)
`typeof` | Returns a string value of each variable put after the function. If no variable is put after declaring it or the variable doesn't exist, it will return -1;
`.` | Concatenate strings (will automatically typecast any non-string value into a string)
`head` | returns the first value of an array (strings are seen as arrays of characters)
`toe` | returns the last value of an array (strings are seen as arrays of characters)
`append` | appends all values at the end of declared array in order (`append iArr 8 9 10` would append 8, 9, 10 to the end of the array)
`pop` | append the last value of an array
