#include <iostream>

typedef std::string string;

void swap_values(int& a, int &b){
    int temp = b;
    b = a;
    a = temp;
}

int main(){
    int a = 2;
    int b = 3;

    std::cout << a << " " << b << std::endl;
    swap_values(a, b);
    std::cout << a << " " << b << std::endl;
    return 0;
}