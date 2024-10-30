#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int Decimal; 
    int Remainder; 
    string Hexadecimal = "";
    //Decimal:      0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15
    char Hex [] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; //Array contains hexadecimal characters
    
    cout << "Convert decimal number to hexadecimal number: \n";
    cout << "---------------------------------------------\n";
    cout << "Input a decimal number: ";
    cin >> Decimal;
    
    //Converts Decimal to Hexadecimal
    while (Decimal > 0) {
        Remainder = Decimal % 16;                   //Calculates the remainder when divided by 16 (Hexadecimal Base)
        Hexadecimal = Hex[Remainder] + Hexadecimal; //Stores each corresponding Hexadecimal character into Hexadecimal string
        Decimal = Decimal/16;                       //Updates Hexadecimal by dividing the decimal by 16
    }
    cout << "The Hexadecimal number is: " << Hexadecimal << "\n";
    return 0;
}