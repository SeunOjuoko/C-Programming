#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum;
    int series;
    
    cout << "Find the series of a number\n";
    cout << "---------------------------------\n";
    cout << "Input number for starting range: ";
    cin >> number;
    
    for (int i = 1; i <= number; i++)
    {
        sum = 0;
        for (int j = 1; j <= i; j++)
        {
           sum += j;
           if (j < i)
           {
            cout << j << " + ";
           } else {
            cout << j << " = " << sum << endl;
           }
        }
       series += sum; 
    }
    
    cout << "\n\nSo the series for the nth term of " << number << " is: " << series << endl;
    return 0;
}