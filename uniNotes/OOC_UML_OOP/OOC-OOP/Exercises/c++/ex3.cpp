#include <iostream>

int main(){

    double temperature, max, total;

    for(int i = 0; i < 5; ++i){
        std::cout << "Enter a temperature: ";
        std::cin >> temperature;
        
        if(!max || temperature >= max){
            max = temperature;
        }
        total += temperature;
    }
 
    if ((total / 5) > 25) {
        std::cout << "Highest Temp: " << max << std::endl;
        std::cout << "Median Temp: " << total / 5 << std::endl;
        std::cout << "Median Temperature Exceeds 25!";
    } else {
        std::cout << "Highest Temp: " << max << std::endl;
        std::cout << "Median Temp: " << total / 5;
    }
    return 0;
}