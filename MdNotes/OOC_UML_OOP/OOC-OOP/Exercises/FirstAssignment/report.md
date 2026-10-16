# Assignment 1 Report:
- ## Exercise 1:
This exercise aims to show basic user input
  - Code:
  ```C++
  #include <iostream>
  
  int main(){
  
      std::string name;
      int age;
      
      std::cout << "Enter your name: ";
      std::getline(std::cin, name);
  
      std::cout << "Enter your age: ";
      std::cin >> age;
  
      std::cout << "Hi " << name << " ! " << "Next year: " << ++age;
      return 0;
  }
  ```
  - Output:
  ```
  Enter your name: Goten
  Enter your age: 19
  Hi Goten ! Next year: 20
  ```

- ## Exercise 2:
This exercise shows how to use user input in arithmetic operations
  - Code:
  ```C++
    #include <iostream>

    int main(){
    
        int price, quantity;
    
        std::cout << "Enter price: ";
        std::cin >> price;
        
        std::cout << "Enter quantity: ";
        std::cin >> quantity;
    
        std::cout << "Total: " << price * quantity;
    
        return 0;
    }
  ```
  - Output:
  ```
  Enter price: 10
  Enter quantity: 4
  Total: 40
  ```

- ## Exercise 3:
This exercise shows off the correct way to handle string input
  - Code:
  ```C++
      #include <iostream>

        int main(){
        
            std::string full_name;
        
            std::cout << "Enter your full name: ";
            std::getline(std::cin, full_name);
        
            std::cout << "Welcome, " << full_name;
        
            return 0;
        }
  ```
  - Output:
  ```
  Enter your full name: Ada Wong
  Welcome, Ada Wong
  ```
- ## Exercise 4 - 6:
This exercise serves as an introduction to classes in c++; attributes, methods, getters, setters, constructors and destructors
  - Code:
  ```C++
    #include <iostream>

    class Pet{
        private:
            std::string name_;
            int age_;
        public:
            Pet(std::string name, int age){ 
                name_ = name; 
                age >= 0 ? age_ = age : age_ = 0; 
            }
            
            int getAge() const { return age_; }
            void Speak(){ std::cout << "Woof" << '\n'; }
            ~Pet(){ std::cout << "Goodbye!"; }
        
        };
    
    int main(){
    
        Pet dog("jak", 6);
        Pet tdog("test", -2); 
        
        std::cout << "Positive Value Given: " << dog.getAge() << '\n';
        std::cout << "Negative Value Given: " << tdog.getAge() << '\n';
        
        dog.Speak();
    
        return 0;
        }
  ```
  - Output:
  ```
  Positive Value Given: 6
  Negative Value Given: 0
  Woof
  Goodbye!Goodbye!
  ```
- ## Exercise 5:
This exercise helps to show how each object is its own unique instance of a class
  - Code:
  ```C++
    #include <iostream>

    class Counter{
        private:
            int count_ = 0;
        public:
            int increment() { return count_++; }
            int getCount() const { return count_; }
    };
    
    int main(){
    
        Counter count1;
        Counter count2;
    
        count1.increment();
    
        std::cout << "count1: " << count1.getCount() << '\n';
        std::cout << "count2: " << count2.getCount();
        
        return 0;
    }
  ```
  - Output:
  ```
  count1: 1
  count2: 0
  ```