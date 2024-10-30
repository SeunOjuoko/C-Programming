#include <iostream>

//Recursive function to calculate the sum of odd and even numbers within a range
void EvenOddSum(int Start, int End, int &EvenSum, int &OddSum)
{
    std::cout << EvenSum << " ";
    //Base Case:
    if(Start > End)     //If start is greater than end then...
        return;         //Recursion stops 
    
    //Recursive case: 
    if (Start % 2 == 0)             
        EvenSum = Start + EvenSum;  //Add the current number to even sum 
    
    else
        OddSum = Start + OddSum;    //Add the current number to odd sum
    
    //Recursively call the function with the next next number in the range  
    EvenOddSum(Start + 1, End, EvenSum, OddSum);
}

int main()
{
    int Start;
    int End;
    
    std::cout << "Input the starting number: ";
    std::cin >> Start;
    std::cout << "Input the ending number: ";
    std::cin >> End;
    
    int Even = 0;
    int Odd = 0;
    
    //Calculates the sum of even and odd numbers through recursion 
    EvenOddSum(Start, End, Even, Odd);
    
    std::cout << "\nSum of Even numbers: " << Even << std::endl;
    std::cout << "Sum of Odd numbers: " << Odd << std::endl;

    return 0;
}