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