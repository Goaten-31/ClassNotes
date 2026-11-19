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

**Note that in the greatest majority of cases, attributes must either be protected or private, otherwise encapsulation won't be correctly implemented**

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
		
		MyClass(int num_val, bool is_true_val){
			num = num_val;
			is_true = is_true_val;
		}
		
		~MyClass();
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
			std::cout << "Protected members = inherited"
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

## A full implementation of all the concepts we touched on in these notes

````C++
#include <iostream>
#include <string>

enum status {
    FUNCTIONAL,
    IN_USE,
    UNAVAILABLE,
    UNDEFINED
};

typedef std::string string;

class Vehicle{
    private:
        string id;
        string serial_code;

    protected:
        string brand;
        string name;
        status is_functional;
        int speed;
        
    public:

        void setID(string id) { this -> id = id; }
        void setBrand(string brand) { this -> brand = brand; }
        void setName(string name) { this -> name = name; }
        void setFunctionalityStatus(status status) { is_functional = status; }
        void setSpeed(int speed) { 
            if (speed > 0) {
                this -> speed = speed;
            }
            
            if (this -> speed < 0) {
                this -> speed = 0; 
            }
        } 
        void setSerial(string name){ this -> serial_code = name + std::to_string(rand());}
        
        string getBrand() const { return brand; } 
        string getName() const { return name; }
        string getFunctionality() const { 
            switch (is_functional) {
                case 0:
                    return "Functional";
                case 1:
                    return "In Use";
                case 2:
                    return "Unavailable";
                case 3:
                    return "Undefined";
            }
        }
        int getSpeed() const { return speed; } 
        string getSerial() const { return serial_code;}

        Vehicle(){
            brand = "N/A";
            name = "N/A";
            is_functional = UNDEFINED;
            speed = 0;
            serial_code = "N/A";
        }

        Vehicle(string brand, string name){
            this -> brand = brand;
            this -> name = name;
            is_functional = UNDEFINED;
            speed = 0;
            serial_code = "N/A";
        }

        void displayInfo(){ std::cout << "Brand: " + getBrand() << std::endl 
                            << "Name: " + getName() << std::endl << 
                            "Functional: " + getFunctionality() << std::endl 
                            << "Speed: " + std::to_string(getSpeed()) << std::endl
                            << "Serial: " + getSerial() << std::endl; }
    
};

class Car : Vehicle {
    private:
        string vehicle_type;

    public:

        void setType() { vehicle_type = "Car"; }
        string getType() const { return vehicle_type; }
        
        Car(){
            Vehicle();
            setType();
        }
        
        void displayInfo(){ std::cout << "Brand: " + getBrand() << std::endl 
                            << "Name: " + getName() << std::endl << 
                            "Functional: " + getFunctionality() << std::endl 
                            << "Speed: " + std::to_string(getSpeed()) << std::endl
                            << "Serial: " + getSerial() << std::endl
                            << "Type: " + getType() << std::endl; }
};

int main(){

    Vehicle car;
    Vehicle other_car("Kia", "K5");
    Car true_car;
    
    car.setBrand("Volvo");
    car.setSpeed(1);
    car.setSerial("Volvo");

    car.displayInfo();
    other_car.displayInfo();
    true_car.displayInfo();
    
    return 0;
}
```