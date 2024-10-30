#include <iostream>     //Include the input/output stream library 
#include <string>       //Includes the String Library

void Reverse(std::string & Text, int Start, int End)
{
    //Base case:
    if (Start >= End)           //When Start (1st Element) is greater or equal to the End (Last Element)...
        return;                 //The String is fully reversed 
    
    std::swap(Text[Start], Text[End]);      //Swap the characters at the Start and End position
    
    //Recursion case:
    Reverse(Text, Start + 1, End - 1);      //Moves to the next pair of the characters  
}

int main()
{
    //Declares the string variable to store the input
    std::string Text;                       
    std::cout << "Input a String: ";
    std::getline(std::cin, Text);
    
    Reverse(Text, 0, Text.length() - 1);                        //Reverse the string using recursion
    
    std::cout << "Reversed string: " << Text << std::endl;      //Displays the reversed string
    
    return 0;
}