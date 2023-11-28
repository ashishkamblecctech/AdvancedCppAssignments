
# Assignment 7 - Lambda Expression with Generalised Capture with Initialization

## Overview

This assignment involves the utilization of a lambda expression in the /src/Reader.cpp file to define a function named printFileNotFoundError. The lambda expression returns a string, which is a copy of a string from the user function stack and is locally initialized in the Capture Clause itself. Additionally, to modify the string in the Lambda Expression, the mutable keyword is specified. However, in this case, the mutable keyword is not necessary.
## Updated Function Definition

1. **Function File:**
   - Function Definition: `/src/Reader.cpp` funtion `void Reader::getTriangles(std::vector<Triangle> &triangles)
`
   - **Code snippet** 
   ```
   auto printFileNotFoundError = [msg="Error! File Not Found"]() mutable
    {
        return msg;
    };
    ```
2. **Lambda Expression:**
   - Define a lambda expression named printFileNotFoundError with a capture clause of [msg="Error! File Not Found!"].
   - The mutable keyword is included to specify that the variables in the capture clause are mutable, not const, although in this case, it's not strictly necessary.
   - Due to the mutable keyword, the value of the string changes from std::string msg = "File error" to std::msg = "Error! File Not Found!" in the Capture Clause itself.
   - However, it's essential to remember that it's just a copy, so the original user stack variable string hasn't yet changed.
   - If we hadn't used the mutable keyword, the variable would be passed as const, preventing changes inside the Lambda Expression.
   - This approach can be analogous to the Initialization List in functions.
   - The lambda expression returns a string indicating a file not found error.

## Usage

1. **Lambda Expression in Action:**
   - Defined `std::string msg = "File error"`
   - Call the lambda expression `printFileNotFoundError` in the `Reader.cpp` file.

2. **Output to User:**
   - Use `std::cout` to output the string returned by the lambda expression.
   - The output will be changed to `"Error! File not Found!"`.
