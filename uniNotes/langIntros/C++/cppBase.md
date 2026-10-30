# Local Setup:
To set up C++ on your local machine you'll need a compiler, either gcc or Clang get the job done.\
[Here's a video detailing how to install gcc on your windows computer](https://youtu.be/2ciUcosJFBc)

# Basics:
This is what the most basic 'valid' program in C++ looks like:
```C++
#include <iostream>

int main(){
    
    return 0;
}
```
`include` is a keyword that allows for us to include libraries in our program, essentially they indicate to the compiler that this program should include this library.\
`iostream` is the library that contains all the basic input-output functions in cpp (hence "io" = "input output").\
The rest is called `the main function`, this is where the main logic of our program will be, it returns 0 to show to the compiler that the program ran successfully.\
*Note that when creating functions or classes, it should be done outside of the main function*
# Input Output:
## Variables:
Variables are simple data structures that contain a single value of a data type.\
Some of the more common data types in c++ are: `int double char string`.\
Here's a program displaying some variable declarations:
```C++
#include <iostream>

// This is a comment
// We can put comments anywhere we want in our program
// They're useful for pointing out things within the same file of our code
// Aka documenting

int main(){
    // We can declare variables with no value
    char symbol; 
    int integer;
    double decimal;

    // We can also declare variables with an initial value
    int other_integer = 1;

    // We can declare multiple variables in one line, with or without a value
    int num1, num2, num3;
    char sym1, sym2, sym3 = '&';

    // In c++, to declare a variable of the string type, we need to call it from the std library
    std::string word; 
    return 0;
}
```

## cin and cout:
`cin` and `cout` are c++'s main input and output functions, to declare them however, we need to proceed them with `std::`; `std::cout`. It's simply a way to tell the compiler to go to the `std` library and fetch a function which we state the name of after `::`.\
`cin` is a function that takes in user input and stores it in a variable.\
`cout` is a function that displays data on the screen, it can also display variable values.\
Here is a basic implementation of these two functions:
```C++
#include <iostream>

int main(){
    //Remeber to always use cout before cin to prompt the user on what to input

    int num;
    std::cout << "Enter a number: " << std::endl; // std::endl (endline) is a way to add a new line to the input
    std::cin >> num;
    std::cout << "The number that comes after is " << ++num << '\n'; // we can also use '\n' for the same purpose as std::endl
    
    return 0;
}
```
## Arithmetic: