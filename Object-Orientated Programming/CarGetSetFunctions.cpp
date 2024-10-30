/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

class Car {
private:
    std::string company, model;
    int year;
public:
    void setCompany(const std::string c)
    {
        company = c;
    }
    
    void setModel(const std::string m)
    {
        model = m;
    }
    
    void setYear(int y)
    {
        year = y;
    }
    
    std::string getCompany()
    {
        return company;
    }
    
    std::string getModel()
    {
        return model;
    }
    
    int getYear() 
    {
        return year;
    }
};

int main()
{
    Car car;
    
    car.setCompany("Audi");
    car.setModel("R8");
    car.setYear(2024);
    
    std::cout << "Company: " << car.getCompany() << std::endl;
    std::cout << "Model: " << car.getModel() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;

    return 0;
}