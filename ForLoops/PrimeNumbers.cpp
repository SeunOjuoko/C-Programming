#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int start, end;
    int found = 0;
    int counter = 0;
    
    cout << "Find prime number within a range\n";
    cout << "---------------------------------\n";
    cout << "Input number for starting range: ";
    cin >> start;
    cout << "Input number for ending range: ";
    cin >> end;
    
    cout << "The prime numbers between: " << start << " and " << end << " are: " <<endl;
    for (int i = start; i <= end; i++)
    {
        for (int j =2; j < sqrt(i); j++)
        {
            if (i % j == 0)
            counter++;
        }
        if (counter == 0 && i != 1)
        {
            found ++;
            cout << i << " ";
        }
        counter = 0;
    }
    cout << "\n\n The total number of prime numbers between " << start << " to " << end << "is: " << found << endl;
    return 0;
}