#include <climits>
#include <iostream>
using namespace std;

//Function defined to find the max number in the array, called numbers
void threeMaxValues(int numbers[], int size) 
{
    int i;
    int first;
    int second;
    int third;
    
    if (size < 3)
    {
        cout << "Invalid Input";
    }
    
    third = first = second = INT_MIN;
    for (i = 0; i < size; i++)
    {
        if (numbers[i] > first)
        {
            third = second;
            second = first;
            first = numbers[i];
        }
        else if (numbers[i] > second)
        {
            third = second;
            second = numbers[i];
        }
        else if (numbers[i] > third)
        {
            third = numbers[i];
        }
    }
    
    cout << "\nThree largest elements are: " << first << "," << second << "," << third;
    
}

//Main Function
int main()
{
    int array[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(array)/sizeof(array[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] <<" ";
    }
    threeMaxValues(array, n);
    return 0;
}
