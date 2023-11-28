
# Assignment 9 - Implemetation of sequential containers List, Vector, Deque

## Overview

This assignment entails the utilization of sequential containers such as list, vector, and deque.

## Updated Function Definition

1. **Function File:**
   - Function Definition: Sketcher-vector/src/Reader.cpp - The Reader class object in the Reader.cpp file reads the file.
   - The provided file is a .stl file, so the reader extracts data of triangles present in the .stl file and stores them in the vector of triangles within the class triangulation.
   ```
       std::list<Triangle> mTriangles;
   ``` 
   - Similarly, the getPoints() method in Sketcher-vector/src/Reader.cpp file also stores Point3D in the file in the vector of points.


   `void Reader::getPoints(std::list<Point3D> &points)`
   - In Sketcher-vector/src/Writer.cpp file, the write() function writes Points in the file given as an argument..
     `void Writer::write(std::string filePath ,std::list<Triangle>& triangles)`

2. **Usage:**
   - The program reads a **.stl** file and returns the points of triangles in the **.txt** file.
   - The Reader reads the **.stl** file, and the Writer writes in the **.txt** file.

3. **Part2 and 3**
   - The above steps are equally applicable for other containers such as std::list and std::deque as well.
