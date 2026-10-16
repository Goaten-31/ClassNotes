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