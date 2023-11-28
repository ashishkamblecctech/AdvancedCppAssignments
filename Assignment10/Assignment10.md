
# Assignment 10 - Implemetation of sequential container Deque Part2

## Overview

This assignment involves the utilization of the sequential container deque and string concatenation.

## Updated Function Definition

1. **Function File:**
   - Function Definition: Sketcher-vector/src/Reader.cpp - The Reader class object in the Reader.cpp file reads the file.
   - The provided file is a .stl file, so the reader extracts data of triangles present in the .stl file and stores them in the vector of triangles within the class triangulation.
   ```
       std::list<Triangle> mTriangles;
   ``` 

   - In `/src/Writer.cpp` function `Writer::write()` vertex Points are written in the text file separated by space character `" "` ad concatenation.
   - For concatenation purpose, return type double is then converted into string using `std::to_string` function.
    ```
    std::string str = std::to_string(triangle.p1().x()) + " " + std::to_string(triangle.p1().y()) + " " + std::to_string(triangle.p1().z()) + "\n";
    dataFile << str;
    ``` 
   - Function `write()`writes Points in the file given as an argument.

2. **Usage:**
   - The program reads a .stl file and returns the points of triangles in the .txt file.
   - The Reader reads the .stl file, and the Writer writes in the .txt file.

3. **Part2 and 3**
   - The above steps are equally applicable for other containers such as std::list and std::vector as well.
