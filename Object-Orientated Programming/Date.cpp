/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int dd, int mm, int yy) : day(dd), month(mm), year(yy) {}
    
    void setDate(int dd, int mm, int yy)
    {
        day = dd;
        month = mm;
        year = yy;
    }
    
    int getDay() const
    {
        return day;
    }
    
    int getMonth() const
    {
        return month;
    }
  
    int getYear() const 
    {
        return year;
    }
    
    bool isValidDate() const {
        if (month < 1 || day > 31)
        return false;
        
        if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
        
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 28)
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Date date(0,0,0);
    
    int day, month, year;
    std::cout << "Input day: ";
    std::cin >> day;
    std::cout << "Input month: ";
    std::cin >> month;
    std::cout << "Input year: ";
    std::cin >> year;
    
    date.setDate(day, month, year);
    
    std::cout << "Date: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl;
    
    if (date.isValidDate())
        std::cout << "The date is valid." << std::endl;
    else
        std::cout << "The date is invalid." << std::endl;

    return 0;
}
