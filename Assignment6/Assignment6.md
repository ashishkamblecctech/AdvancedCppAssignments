
# Assignment 6 - Lambda Expression with Capture clause and mutable implementation

## Overview

This assignment entails the application of a lambda expression in the /src/BBox.cpp file to define a function named printFileNotFoundError. The lambda expression returns a string, which is referenced from the user function stack using the & reference operator in the Capture Clause. Additionally, to modify the string within the Lambda Expression, the mutable keyword is specified. Subsequently, this string is outputted to the user using std::cout.
## Updated Function Definition

1. **Function File:**
   - Function Definition: `/src/BBox.cpp` funtion `auto getMaxPoint = [pointToCompare, &max] () mutable{}`
   - **Code snippet** 
   ```
   auto getMaxPoint = [pointToCompare, &max] () mutable{
       max.setX(std::max(pointToCompare.x(),max.x()));

        max.setY(std::max(pointToCompare.y(),max.y()));

        max.setZ(std::max(pointToCompare.z(),max.z()));
    };
    ```
2. **Lambda Expression:**
   - Define a lambda expression named `getMaxPoint` with capture clause as `[&max]`.
   - We used mutable keyword in order to specify that the variables in the capture clause be `mutable` not `const`.
   - If we removed 'mutable' keyword then 'pointToCompare' object has type qualifiers that are not compatible with the member function "Point3D::x" 
   - The lambda expression returns a string indicating a file not found error.

## Usage

1. **Lambda Expression in Action:**
   - Call the lambda expression `getMaxPoint` in the `BBox.cpp` file.

2. **Output to User:**
   - Use `auto` to output the string returned by the lambda expression.
