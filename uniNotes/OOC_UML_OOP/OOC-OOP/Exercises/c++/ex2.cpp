#include <iostream>

int main(){
    std::string item_name;
    double price;
    int quantity;
    
    std::cout << "Enter Name: ";
    std::cin >> item_name;

    std::cout << "Enter unit price: ";
    std::cin >> price;

    std::cout << "Enter quantity: ";
    std::cin >> quantity;

    std::cout << "Item: " << item_name << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Subtotal: " << quantity * price << std::endl;
    std::cout << "Total: " << (quantity * price) - ((quantity * price) * 0.1);
    return 0;
}