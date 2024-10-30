#include <iostream>     //Include the input/output stream library 

using namespace std;

//Recrusive function to find the Maximum element in Array
int findMax(int Number[], int Start, int End) 
{
    //Base case:
    if (Start == End)           //When there is only one element...
        return Number[Start];   //It is a maximum
    
    //Recursive Case: 
    int Middle = (Start + End) / 2;                 //Halves the array to find the maximum in each half 
    int Max1 = findMax(Number, Start, Middle);
    int Max2 = findMax(Number, Middle + 1, End);
    
    return (Max1 > Max2) ? Max1 : Max2;             //Returns the maximum of two halves
    
}

//Recrusive function to find the Minimum element in Array
int findMin(int Number[], int Start, int End)
{
    //Base case:
    if (Start == End)           //When there is only one element...
        return Number[Start];   //It is a minimum       
    
    //Recursive Case:
    int Middle = (Start + End) / 2;                 //Halves the array to find the minimum in each half 
    int Min1 = findMin(Number, Start, Middle);
    int Min2 = findMin(Number, Middle + 1, End);
    
    return (Min1 < Min2) ? Min1 : Min2;             //Returns the minimum of two halves
    
}

int main()
{
    int Number[] = {9,2,4,8,2,2,3,4,5,7,1};          //Initialises an array with elements
    int Size = sizeof(Number) / sizeof(Number[0]);  //Calculates the size of an array
    
    std::cout << "Array elements: " << std::endl;
    
    //Loops through elements within the array and displays them 
    for (size_t i=0; i < Size; i++)
    {
        std::cout << Number[i] << ' ';
    }
    
    //Through Recursion...
    int Maximum = findMax(Number, 0, Size - 1);     //Displays the Maximum
    int Minimum = findMin(Number, 0, Size - 1);     //Displays the Minimum
    
    std::cout << "\nMaximum Element: " << Maximum << std::endl;
    std::cout << "\nMinimum Element: " << Minimum << std::endl;
    
    return 0;
}
