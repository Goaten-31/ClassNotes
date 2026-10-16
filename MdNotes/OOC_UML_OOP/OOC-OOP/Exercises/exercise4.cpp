#include <iostream>

class Pet{
    private:
        std::string name_;
        int age_;
    public:
        Pet(std::string name, int age){ 
            name_ = name; 
            age >= 0 ? age_ = age : age_ = 0; 
        }
        
        int getAge() const { return age_; }
        void Speak(){ std::cout << "Woof" << '\n'; }
        ~Pet(){ std::cout << "Goodbye!"; }
    
};

int main(){

    Pet dog("jak", 6);
    Pet tdog("test", -2); 
    
    std::cout << "Positive Value Given: " << dog.getAge() << '\n';
    std::cout << "Negative Value Given: " << tdog.getAge() << '\n';
    
    dog.Speak();

    return 0;
}