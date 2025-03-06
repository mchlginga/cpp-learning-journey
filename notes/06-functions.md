# Introduction to Functions

A reusable block of code that performs a specific task.

Helps in code organization, readability, and reusability.

## Function Structure

returnType functionName (parameters)
{
    return value; // if returnType is not void
}


## Types of Functions

1. Built-in functions

 - e.g., std::cout, std::sqrt()

2. User-defined functions

 - Custom functions created by programmers.


## Best Practices and Tips

1. use meaningful function names to describe their purpose.

2. keep functions short and focused on a single task.

3. avoid global variables—prefer function parameters for data input.

---

# Function Return Values

a function that computes and returns a value to the caller using return.

the return type must match the function’s declared type (e.g., int, double).

## Syntax

returnType functionName (parameters) 
{
    return value;  // Must match returnType
}


## Best Practices and Tips

1. ensure the function always returns a value (if not void).

2. return meaningful values, not hardcoded ones.

3. use functions to simplify complex calculations.

---

# Void Functions (Non-Value Returning)

A function that performs an action but does not return a value.

Commonly used for printing output, modifying global variables, or handling user input.

## Syntax

void functionName(parameters) {
    // Function body (no return statement needed)
}


## Best Practices and Tips

1. use void when a function does not need to return a value.

2. avoid using return inside a void function unless exiting early (return; is allowed).

3. keep void functions focused on a single task for better readability.

---

# Function Parameters & Arguments

## Parameters

 - variables listed in the function definition to receive values.


## Arguments

 - actual values passed to the function when called.


## Syntax

returnType functionName(parameterType param1, parameterType param2) 
{
    // Function body
}


## Best Practices and Tips

1. use parameters to make functions reusable.

2. ensure parameter types match argument types when calling a function.

3. keep the number of parameters minimal for readability.

---

Question:

Write a complete program that reads an integer from the user, doubles it using the doubleNumber() function you wrote in the previous quiz question, and then prints the doubled value out to the console
