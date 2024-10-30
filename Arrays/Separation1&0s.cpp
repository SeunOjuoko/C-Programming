#include <iostream>
using namespace std;

void separate(int numbers[], int n)
{
    int counter = 0;
    
    for (int i = 0; i < n; i++) {
        if (numbers[i] == 0) {
            counter++;
        }
    }
    
    for (int i = 0; i < counter; i++)
    {
        numbers[i] = 0;
    }
    
    for (int i = counter; i < n; i++)
    {
        numbers[i] = 1;
    }
}

int main()
{
    int numbers[] = {0, 1, 0, 0, 1, 1, 1, 0, 1, 0};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    cout << "Original Array: ";
    for (int i=0; i < n; i++) 
    {
        cout << numbers[i] << " ";
    }
    separate(numbers, n);
    cout << "\nArray after separation: ";
    for (int i=0; i < n; i++) 
    {
        cout << numbers[i] << " ";
    }
    return 0;
}


