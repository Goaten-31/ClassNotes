# Definitions:

## Constructors:

Objects are verbose to implement, and often may need multiple lines to fill out all the needed attributes.
With Constructors, it only takes a singular line to implement an Object from a Class.
A Constructor is essentially a function that helps build the class and eases implementation.

### Constructor Overloading:

It is possible to overload constructors to give out default values for an object, while still keeping the versatility of a constructor

## Access Specifiers:

These determine the accessibility to a selection of attributes and methods within a class, these often help with protecting said attributes and methods to ensure data integrity.
They often help with Inheritance and offer help implement Encapsulation.

## Getters and Setters:

Getters and Setters are methods within a class;\
*Getters* return the value of a specified attribute\
*Setters* sets the value of a specified attribute

# Implementations:

## Constructors:

## Constructor implementation in C++:

Note that python uses the `__init__` constructor; you can't create a class in Python, without a constructor

```C++

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
		
		~MyClass(){
		
		}
};

int main(){
	
	MyClass Obj1(1, true);
	
	return 0;
}

```

## Constructor Overloading implementation in C++

```C++

class MyClass{

	public:
		int num;
		bool is_true;
		
		void display(){
			std::cout << "im an object";
		}
		
		MyClass(){
			num = 0; //*
			is_true = false; //*
		}
		
		MyClass(num, is_true){
			num = x;
			is_true = y;
		}
};

		int main(){ 
	
	MyClass OverObj; //* This class will have the previously stated values
	MyClass Obj1(1, true);
	
	return 0;
}

```

## Implementation of Access Specifiers in C++ and Python:

```C++

class MyClass{
	
	private:
		
		void privateMethod(){
			std::cout << "private members = inaccessible";
		}
		
	protected:
		char symb;
		
		void protectedMethod(){
			std::cout << "Protected members = inhereted"
		}
	
	public:
		int num;
		bool is_true;
		
		void display(){
			std::cout << "im an object";
		}
};

int main(){
	
	MyClass Obj1;
	
	Obj1.num = 1;
	Obj1.is_true = true;
	
	return 0;
}

```


```Python

class MyClass:
	def __init__(self, num, is_true):
		self.num = num
		self.__is_true = is_true #with __, is_true is now a private attribute
		
	def display(self):
		print("im an object")
		
Obj1 = MyClass(1)

```

## Implementation of Getters and Setters in C++:
```C++

class MyClass{
	
	private:
		
		void privateMethod(){
			std::cout << "private members = inaccessible";
		}
		
	protected:
		char symb;
		
		void protectedMethod(){
			std::cout << "Protected members = inhereted"
		}
	
	public:
		int num;
		bool is_true;

		void setNum(int value) { num = value; }

		int getNum() const { return num; }
		
		void display(){
			std::cout << "im an object";
		}
};

int main(){
	
	MyClass Obj1;
	
	Obj1.setNum(1);
	Obj1.is_true = true;

	
	return 0;
}

```