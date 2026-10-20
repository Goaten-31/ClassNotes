#include <iostream>

int main(){

    std::string full_name;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, full_name);

    std::cout << "Welcome, " << full_name;

    return 0;
}