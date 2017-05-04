# Solved Array problems 
This section contains useful information related to arrays and all problems and which were solved. 

### Useful URLs
* [Array problems](https://leetcode.com/tag/array/)

### About arrays
An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

That means that, for example, five values of type int can be declared as an array without having to declare 5 different variables (each with its own identifier). Instead, using an array, the five int values are stored in contiguous memory locations, and all five can be accessed using the same identifier, with the proper index.

Like a regular variable, an array must be declared before it is used. A typical declaration for an array in C++ is:

type name [elements];

where type is a valid type (such as int, float...), name is a valid identifier and the elements field (which is always enclosed in square brackets []), specifies the length of the array in terms of the number of elements.

Therefore, the foo array, with five elements of type int, can be declared as:
 
int foo [5];

NOTE: The elements field within square brackets [], representing the number of elements in the array, must be a constant expression, since arrays are blocks of static memory whose size must be determined at compile time, before the program runs.

### Solutions 
* [Find minimum in rotated sorted array](/Arrays/findminimuminrotatedsortedarray.cpp)
* [Largest Number](/Arrays/largestnumber.cpp)