#include <iostream>

using namespace std;

int main()
{
    int number;
    int factorial = 1;
    
    cout << "Find the factorial of a number\n";
    cout << "---------------------------------\n";
    cout << "Input number for starting range: ";
    cin >> number;
    
    for (int i = 1; i <= number; i++)
    {
       factorial = factorial * i;
       if (i < number)
       {
        cout << i << " x ";
       } else {
        cout << i << " = " << factorial;
       }
    }
    cout << "\n\nSo the factorial of the given number is: " << factorial << endl;
    return 0;
}