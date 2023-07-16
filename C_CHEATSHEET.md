# C Cheatsheet

## String formatting

```c
"%d" or "%i"    // Integer (%d used for decimals, %i auto checks numeral system)
"%u"            // Unsigned Integer
"%o"            // Octal Unsigned Integer
"%x"            // Hexadecimal Unsigned Integer
"%X"            // Hexadecimal Unsigned Int. Capitalised
"%f"            // Floating Point
"%e / %E"       // Mantissa / Exponent (Scientific notation)
"%g"            // Fixed Point
"%p"            // Adress in Hex form (pointers)
"%c"            // Unsigned Char
"%s"            // String
"%ld"           // Long-signed Integer
```

## Types

```c
/* 8 BIT VALUES */
char            // Char Integer
signed char     // Same as char, but forced to be range -127 to +127
unsigned char   // Same as char, but forced to be range 0 to 255


/* 16 BIT VALUES */
short           // Short Integer
short int
signed short    // Range -32,767 to +32,767
signed short int

unsigned short  // Range 0 to 65,535
unsigned short int

int             // Basic Integer 
signed          // Range -32,767 to 32,767
signed int

unsigned
unsigned int    // Range 0 to 65,535

/* 32 BIT VALUES */
long            // Long integer
long int
signed long     // Range -2,147,483,647 to +2,147,483,647
signed long int

unsigned long   // Range 0 to 4,294,967,2955
unsigned long int

/* 64 BIT VALUES */
long long       // Long long integer 
long long int   // Range -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
signed long long
signed long long int

// Range 0 to 18,446,744,074,709,551,615
unsigned long long
unsigned long long int

/* UNIQUE TYPES */
float           // Single point precision Floating Point
double          // Double point precision Floating Point
long double     // Extended precision Floating Point
```

## Structures

[[1]](https://en.wikipedia.org/wiki/C_data_types#Structures)

```c
/*
    "Structures aggregate the storage of multiple data items, of potentially 
    differing data types, into one memory block referenced by a single variable.
    [1]
*/

struct StructName {
    int value;
    char value2;
};

struct StructName foo = {20, "bar"};
```

### Typedef

```c
typedef int length;

// This will now allow you to set variables with the type length, which is 
// itself an int:

length wall = 20

typdef struct StructName {
    int value;
    char value2;
} StructTypedefName;

// This will now allow you to instead of having to type struct StructName foo,
// write StructTypedefName foo;
```

### Boolean (<stdbool.h>)

Adds the boolean operators `true` and `false`.

### Arrays

```c
int cat[10];    // Array of 10 elements, each of type int.

int arr[10][8]  // Array of 10 elements, each of type 'array of 8 int elements'
```

### Pointers

```c
// Pointers in C point to an adress in memory related to a variable

int a = 20;
int *pa = NULL;

pa = &a
// In this case, pa is a pointer that points to the memory adress of a

int array[5]        // Declares array of 5 integers
int *ptr = array;   // Array used as pointer
ptr[0] = 1;         // Pointer indexed with array syntax
*(array + 1) = 2;   // Array can be dereferenced with pointer syntax
*(1 + array) = 2;   // Pointer addition is commutative
2[array] = 4;       // Subscript operator is commutative
```

```c
int array[5] = {2, 4, 3, 1, 5};
```

x   | 0 | 1 | 2 | 3 
-----|---|---|---|---
1000 | 2 | 0 | 0 | 0
1004 | 4 | 0 | 0 | 0 
1008 | 3 | 0 | 0 | 0 
100C | 1 | 0 | 0 | 0 
1010 | 5 | 0 | 0 | 0 

`array` means 0x1000

`array + 1` means 0x1004: the "+ 1" means add the size of `1` int, which is 4 
bytes

`*array` means to dereference the contents of `array`. Considering the contents
as a memory address (0x1000), look up the value at that location (0x0002)

`array[i]` means element number `i`, 0-based, of `array`, which is translated 
into `*(array + i)`

`array + i` is the memory location of the (i)th element of `array`, starting at
i = 0

`*(array + i)` takes that memory address and dereferences it to access the value
