/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // Include necessary header for input/output stream
#include <cmath> // Include necessary header for mathematical functions

const double PI = 3.14159; // Define the value of PI as a constant

class Circle { // Define a class named Circle
  private: 
    double radius; // Private member to store the radius
  public:
    //Constructor to initialize the Circle object with a radius
    Circle(double rad): radius(rad) {}
    
    // Member function to calculate the area of the circle
    double calculateArea() {        
      return PI * pow(radius, 2);       // Formula to calculate the area of a circle
    }

    double calculateCircumference() {   // Member function to calculate the circumference of the circle
      return 2 * PI * radius;           // Formula to calculate the circumference of a circle
    }
};

int main() {
                    // Create a circle object
  double radius;
  std::cout << "Input the radius of the circle: ";
  std::cin >> radius; // Input the radius from the user
  
  Circle circle(radius); // Create a Circle object with the given radius

  // Calculate and display the area of the circle
  double area = circle.calculateArea(); // Calculate the area using the Circle object
  std::cout << "Area: " << area << std::endl; // Output the calculated area

  // Calculate and display the circumference of the circle
  double circumference = circle.calculateCircumference(); // Calculate the circumference using the Circle object
  std::cout << "Circumference: " << circumference << std::endl; // Output the calculated circumference

  return 0; // Return 0 to indicate successful completion
}