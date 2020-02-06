# Homework1
Second homework of ECE 231: Intermediate Programming. Assigned 1/31/2020. Due 2/7/2020, 11:59 pm.
## Context
You are to update a library that is a simple complex library. You are going to create two functions, make an already existing function more robust, create an array of function pointers, and go through the array of function pointers, calling each function.

### In my_complex.h
You are going to create two function prototypes:

    A function that will not return anything and take three inputs: a function pointer that returns a complex struct, and two complex structs, that represent the inputs for the function pointer. Should print result of function called.
    A function that will not return anything and take two inputs: a function pointer that returns a double and a complex struct, that represents the input for the function pointer. Should print result of function called.
### In complex_fns.c
You are going to be:

    Modifying complex_div so that there is no division by zero 
    Create a function handler that takes a pointer to a function and two complex structs as an input. It should call the function. Should handle the add, sub, mult, and div functions.
    Another function handler but handles magnitude and phase functions only.
    
### In main.c
There are two complex numbers that are given to you, you must:
    
    Create an array of function pointers that holds: add, sub, mult, and div
    Create another array of function pointer that holds: magnitude and phase
    Two loops that go through each array and call each function with the two complex numbers given to you
Feel free to create more complex numbers and test them with your function handler. Also feel free to call your function handler directly.

## Rubric

  1. `Function prototypes: 20%`
  1. `Function implementation: 40%`
  1. `Pointer array creation and use: 20%`
  1. `Clean code: 20%`
