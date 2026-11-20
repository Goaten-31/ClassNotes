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
    
    std::cout << x << std::endl;
    addFiveByValue(x);
    
    std::cout << x << std::endl;

    addFiveByRef(x);
    std::cout << x << std::endl;
    return 0;
}