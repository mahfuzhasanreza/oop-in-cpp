# OOP in C++

## Step-by-step C++ Files
- class_and_object.cpp
- constructor.cpp
- this_ptr.cpp
- default_copy_constructor.cpp
- custom_copy_constructor.cpp
- shallow_copy_problem.cpp

## Encapsulation
**Encapsulation** is wrapping up of data & member functions in a single unit called class.

## Constructor
**3 Types in C++**
1. non-parameterized constructor
2. parameterized constructor
3. copy constructor

**Constructor Overloading:**
Constructor overloading is a concept where we can use multiple constructor in a class. The name of all constructor can be same but their type must diffrent from each other.

**Copy Constructor:**
Copy Constructor (default) used to copy properties of one object into another.

## Shallow & Deep Copy
A shallow copy of an object copies all of the member values from one object to another.  
**Problem:** Dynamic memory allocation (in Heap not in Stack).
  
A deep copy, on the other hand, not only copies the member values but also make copies of any dynamically alloated memory that the members point to.

## Destructor
Opposite of constructor
  
Constructor: Allocate memory for object.
Destructor: Deallocate memory for object.