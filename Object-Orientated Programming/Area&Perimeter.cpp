/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double len, double wid) : length(len), width(wid) {};
    
    double calculateArea() {
        return length * width;
    }
    
    double calculatePerimeter() {
        return 2*(length+width);
    }
};

int main()
{
    double length;
    double width;
    std::cout << "Input the length of the Rectangle: ";
    std::cin >> length; 
    
    std::cout << "Input the width of the Rectangle: ";
    std::cin >> width; 
    
    Rectangle rectangle(length, width);
    
    double area = rectangle.calculateArea();
    std::cout << "Area: " << area << std::endl;
    
    double perimeter = rectangle.calculatePerimeter();
    std::cout << "Perimeter: " << perimeter << std::endl;
    
    return 0;
}