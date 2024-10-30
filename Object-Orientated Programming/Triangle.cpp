/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

class Triangle {
private:
    //Private member variables to store
    double side1, side2, side3;
public:
    //Constructor 
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    
    void comparision()
    {
        if (side1 == side2 && side2 == side3)
        {
            std::cout << "Equilateral Triangle" << std::endl;
        } 
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            std::cout << "Isolceles Triangle" << std::endl;
        }
        else
        {
            std::cout << "Scalene Triangle" << std::endl;
        }
    }
};

int main()
{
    double s1, s2, s3;
    std::cout << "Input the lengths of the three triangles:\n";
    std::cout << "Side1: ";
    std::cin >> s1;
    std::cout << "Side2: ";
    std::cin >> s2;
    std::cout << "Side3: ";
    std::cin >> s3;
    
    Triangle triangle(s1, s2, s3);
    
    triangle.comparision();
    
    return 0;
}
