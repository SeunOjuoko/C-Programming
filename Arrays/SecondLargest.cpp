#include <climits>
#include <iostream>
using namespace std;

//Function defined to find the max number in the array, called numbers
void SecondLargest(int numbers[], int ArraySize) 
{
    int i;
    int first;
    int second;
    
    if (ArraySize < 2)
    {
        cout << "Invalid Input ";
        return;
    }
    
    first = second = INT_MIN;
    for (i = 0; i < ArraySize; i++)
    {
        if (numbers[i] > first)
        {
            second = first;
            first = numbers[i];
        }
        else if (numbers[i] > second && numbers[i] != first)
        {
            second = numbers[i];
        }
    }
    
    if (second == INT_MIN) 
    {
        cout << "No second largest element";
    } else {
        cout << "\nThe second largest element is: " << second;
    }
}

//Main Function
int main()
{
    int numbers[] = {7 ,12 ,9 ,15 ,19 ,32 ,56 ,70};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << "";
    }
    
    SecondLargest(numbers, n);
    return 0;
}

