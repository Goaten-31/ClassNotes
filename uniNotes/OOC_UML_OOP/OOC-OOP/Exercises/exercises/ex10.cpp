#include <iostream>

typedef std::string string;

void addFiveByValue(int x){
    x += 5;
}

void addFiveByRef(int& x){
    x += 5;
}

int main(){
    int x = 5;
    
    std::cout << "Before addFiveByValue: "<< x << std::endl;
    addFiveByValue(x);
    
    std::cout << "After addFiveByValue and Before addFiveByRef: " << x << std::endl;

    addFiveByRef(x);
    std::cout << "After addFiveByRef: "<< x << std::endl;
    return 0;
}