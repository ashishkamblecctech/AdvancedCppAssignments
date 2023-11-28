## Overview
This assignment involves the use of sequential containers, deque, and string concatenation.

# Updated Function Definition
Reader Class (File: Sketcher-vector/src/Reader.cpp)
The Reader class object reads data from a provided file. In this case, the file is a .stl file. The reader extracts data of triangles present in the .stl file and stores it in the vector of triangles within the triangulation class.
std::list<Triangle> mTriangles;

# Writer Class (File: /src/Writer.cpp)
In the Writer class, the write() function is responsible for writing vertex points to a text file. The vertex points are separated by space character " " for concatenation purposes. To achieve this, the return type double is converted into a string using the std::to_string function.
std::string str = std::to_string(triangle.p1().x()) + " " + std::to_string(triangle.p1().y()) + " " + std::to_string(triangle.p1().z()) + "\n";
dataFile << str;
Usage
The program reads a .stl file and returns the points of triangles in a .txt file. The Reader reads the .stl file, and the Writer writes to the .txt file.
