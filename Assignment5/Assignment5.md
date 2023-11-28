
# Assignment 5 - Lambda Expression for String Output

## Overview

This assignment focuses on the utilization of a lambda expression in the /src/Reader.cpp file to define a function named printFileNotFoundError. The lambda expression is designed to return a string, and this string is subsequently displayed to the user using std::cout.
## Updated Function Definition

1. **Function File:**
   - Function Definition: `/src/Reader.cpp`

2. **Lambda Expression:**
   - Define a lambda expression named `isFileExist` with no capture clause.
   - The lambda expression returns a string indicating a file not found error.

## Usage

1. **Lambda Expression in Action:**
   - Call the lambda expression `isFileExist` in the `Reader.cpp` file.

2. **Output to User:**
   - Use `std::cout` to output the string returned by the lambda expression.

e.g. 
In /src/Reader.cpp  
```auto isFileExist = []()
    {
        std::string msg = "File does not Exists!!!";
        return msg;
    };
```
