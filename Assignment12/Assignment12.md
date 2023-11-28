# Assignment 12 - Implementation of Virtual Functions and Inheritance

## Overview

This assignment delves into the Object-Oriented Programming (OOP) concepts of Inheritance and the utilization of virtual functions. The classes involved are Point3D, Triangle, and Triangulation. The print() function is declared as virtual in these classes to showcase polymorphic behavior.

## Implementation Steps

1. **Declaration of Virtual Function:**
   - The print() function is declared as virtual in the Point3D, Triangle, and Triangulation classes.

2. **Inheritance:**
   - The Triangle class inherits from the Point3D class.
   - The Triangulation class inherits from the Triangle class.

3. **Definition of Virtual Function:**
   - The print() function is defined in the Point3D, Triangle, and Triangulation classes.

4. **Function in Main:**
   - A function in main is defined to take a Point3D object as an argument.

5. **Object Creation:**
   - Objects of Point3D, Triangle, and Triangulation are created.

6. **Polymorphic Behavior:**
   - Objects are passed to the printClassName() function to print the class name, showcasing polymorphic behavior.
