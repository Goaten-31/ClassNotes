# Concepts and Definitions

## Classes & Objects
A class is essentially a blueprint for creating objects they are composite data type with a collection of attributes and methods, with varying levels of accessibility 

An object is an *instance* of a class

Object-Oriented Programming help with organizing code bases and improving speed of development

## Abstraction
Helps simply complex systems by focusing on only the essential features of an object, what it does instead of how it does it. Making the code easier to understand, implement and maintain.

Abstraction is inherent to OOC implementation; by making an object, you're implementing abstraction.

## Encapsulation
Encapsulation is the grouping and protection of attributes and methods that operate on a class.
It helps protect data from unauthorized or accidental modifications, and streamline control of the object.

Encapsulation is often implemented in programming languages using *Access Specifiers*

## Inheritance
It allows for us to create an interface class which we can branch out from and create new classes with the same core attributes and methods, comes in handy for scaling and implementing new features.

## Polymorphism 
It allows for one class to be used for different data types and/or behaviors. It helps make code more flexible and extensible, and helps the correct handling for the datatype.

# Implementation

## Classes & Objects

### Here are implementations of classes and objects in C++ and Python:
Implementation can be simplified and generalised by using [[Constructors]]

```C++

#include <iostream>

class MyClass{

	public:
		int num;
		bool is_true;
		
		void display(){
			std::cout << "im an object";
		}
		
		MyClass(num, is_true){
			num = x;
			is_true = y;
		}
};

int main(){
	
	MyClass Obj1(1, true);
	
	return 0;
}

```

```Python

class MyClass:
	def __init__(self, num, is_true):
		self.num = num
		self.is_true = is_true
		
	def display(self):
		print("im an object")
		
Obj1 = MyClass(1, True)

```

## Inheritance

### Implementation in C++ and Python:

```C++
class ParentClass {
	
	public:
		int num;
		bool is_true;
		
		void display(){
			std::cout << "im an object";
		}
};

class ChildClass : ParentClass {
	public:
		char child_symbol;
};
```

```Python
class ParentClass:
	def __init__(self, num, is_true):
		self.num = num
		self.is_true = is_true

class ChildClass(ParentClass):
	def __init__(self, num, is_true, symbol)
		super.__init__(num, is_true)
		self.symbol = symbol
```

## 