#include <iostream>
#include <string>

    class Rectangle{
    private:
        double height;
        double width;

    public:
        Rectangle(){
            height = 0.0;
            width = 0.0;
        }
        Rectangle(double height, double width){
            this -> height = height;
            this -> width = width;
        }

        double getheight(){ return height;}
        double getwidth(){ return width;}
};

int main(){

    Rectangle r1;

    std::cout << r1.getheight() << " " << r1.getwidth();

    Rectangle r2(1.1, 1.2);

    std::cout << r2.getheight() << " " << r2.getwidth();
    
    return 0;
}