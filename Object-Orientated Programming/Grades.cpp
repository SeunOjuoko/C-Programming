/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

//Define class called Student
class Student {
private:
    std::string Name;    //Private member variable that stores student's name
    std::string Class;      //Private member variable that stores student's class
    int ID;                 //Private member variable that stores the r
    double Score;

public:
    Student(const std::string &n, const std::string &c, int i, double s) : Name(n), Class(c), ID(i), Score(s) {}
    
    std::string Grade() {
        if (Score >= 90) {
            return "A+";
        } else if (Score >=80) {
            return "A";
        } else if (Score >=70) {
            return "B";
        }  else if (Score >=60) {
            return "C";
        }  else {
            return "D";
        }
    }
    
    void display()
    {
        std::cout << "\n\nName: " << Name << std::endl;
        std::cout << "Class: " << Class << std::endl;
        std::cout << "ID: " << ID << std::endl;
        std::cout << "Score: " << Score << std::endl;
        std::cout << "Grade: " << Grade() << std::endl;
    }
};


int main()
{
    std::string n;
    std::string c;
    int i;
    double s;
    
    std::cout << "Student details: ";
    std::cout << "\nName: ";
    std::getline(std::cin, n);
    
    std::cout << "Class: ";
    std::getline(std::cin, c);
    
    std::cout << "ID: ";
    std::cin >> i;
    
    std::cout << "Score (0-100): ";
    std::cin >> s;
    
    Student student(n, c, i, s);
    
    student.display();
    
    return 0;
}
