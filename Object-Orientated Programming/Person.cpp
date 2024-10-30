/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string country;
public:
    void setName(const std::string &n) 
    {
        name = n;
    }
    
    void setAge(int a) 
    {
        age = a;
    } 
    
    void setCountry(const std::string &c) 
    {
        country = c;
    }
    
    std::string getName()
    {
        return name;
    }
    
    int getAge() 
    {
        return age;
    }
    
    std::string getCountry()
    {
        return country;
    }
};

int main()
{
    Person person1;
    Person person2;
    
    person1.setName("Zeon Ojuoko");
    person1.setAge(24);
    person1.setCountry("USA");
    
    person2.setName("Tyler Doran");
    person2.setAge(30);
    person2.setCountry("Canada");
    
    std::cout << "Name: " << person1.getName() << std::endl;
    std::cout << "Age: " << person1.getAge() << std::endl;
    std::cout << "Country: " << person1.getCountry() << std::endl;
    
    std::cout << "" << std::endl;
    
    std::cout << "Name: " << person2.getName() << std::endl;
    std::cout << "Age: " << person2.getAge() << std::endl;
    std::cout << "Country: " << person2.getCountry() << std::endl;

    return 0;
}
