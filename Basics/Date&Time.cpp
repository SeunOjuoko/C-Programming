#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    //Current date and time in current system using time_t data type
    time_t current_dt = time(0);
    //Converts date time to string format using ctime function
    char* result = ctime(&current_dt);
    //Display the current date and time in string format
    cout << "The current date and time is:\n" << result << endl;
}