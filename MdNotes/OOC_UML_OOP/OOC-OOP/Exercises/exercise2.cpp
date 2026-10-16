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