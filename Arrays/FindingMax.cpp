#include <algorithm>
#include <iostream>
using namespace std;

//Function defined to find the max number in the array, called numbers
int findMax(int numbers[], int n) {
    return *max_element(numbers, numbers + n);  //Returns max number in the array called numbers 
}

//Main Function
int main()
{
    //Declares and initialises the integer within the array, called numbers
    int numbers[] = {5,4,9,12,8,6,34};
    
    //Determines the size of the array 
    int n = sizeof(numbers)/sizeof(numbers[0]);
    
    cout << "Original array: ";
    for (int i=0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    
    cout << "\nLargest element of the said array: "<< findMax(numbers, n);

    return 0;
}
