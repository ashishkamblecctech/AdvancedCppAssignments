# Assignment 8 - Use of `std::vector<Template class>::iterator` Container in C++ STL

## Overview

This assignment focuses on employing std::vector<Triangle>::iterator as a container (essentially a pointer) to iterate through a vector for outputting a string to a file. To facilitate the looping process, the for_each() function from the <algorithm> library is used.
1. **Iterators**
   - Implementation: std::vector<Triangle>::iterator start = triangles.begin();
   - An iterator object named start is used to reference the first element of the vector, and end is employed to reference the last element.
   - An iterator can be thought of as a pointer to the objects in the container.

2. **for_each()**
    - Implementation: for_each(start, end, [&dataFile](Triangle triangle){} );
    - The for_each() function, part of the <algorithm> library, is employed for looping through the vector. It takes three arguments, for_each(vector.begin(), vector.end(), func() ).
    - A lambda function is used in the for_each loop as the third argument, with a Capture clause element referencing Datafile as a std::ostream object.
## Testing in `Writer.cpp`

```cpp
// Writer.cpp

#include "Triangulation.h"

void Writer::write(std::string filePath ,std::vector<Triangle>& triangles)
{
  std::ofstream dataFile;
  dataFile.open(filePath);
  std::vector<Triangle>::iterator start = triangles.begin();
  std::vector<Triangle>::iterator end = triangles.end();
  for_each(start, end, [&dataFile](Triangle triangle) mutable
  {
      dataFile << triangle.p1().x() << " " << triangle.p1().y() << " "<< triangle.p1().z() << std::endl;
      dataFile << triangle.p2().x() << " " << triangle.p2().y() << " "<< triangle.p2().z() << std::endl;
      dataFile << triangle.p3().x() << " " << triangle.p3().y() << " "<< triangle.p3().z() << std::endl;
      dataFile << triangle.p1().x() << " " << triangle.p1().y() << " "<< triangle.p1().z() << std::endl;
  });
  dataFile.close();
};

```
