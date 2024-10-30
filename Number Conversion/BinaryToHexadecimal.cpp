#include <iostream>

using namespace std;

int main()
{
    long Binary;
    long Decimal = 0;
    long j = 1;
    long Remainder;
    string Hexadecimal = "";
    //Decimal:      0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15
    char Hex [] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; //Array contains hexadecimal characters
    
    cout << "Convert Binary to Decimal number: \n";
    cout << "---------------------------------------------\n";
    cout << "Input the Binary: ";
    cin >> Binary;
    
    //Conversion from Decimal to Binary
    while (Binary != 0) {                 
        Remainder = Binary % 10;             
        Decimal = Decimal + Remainder * j;
        j = j * 2;
        Binary = Binary / 10;
    }
    cout << "The Decimal number: " << Decimal << endl;
    
    while (Decimal > 0) {
        Remainder = Decimal % 16;                   //Calculates the remainder when divided by 16 (Hexadecimal Base)
        Hexadecimal = Hex[Remainder] + Hexadecimal; //Stores each corresponding Hexadecimal character into Hexadecimal string
        Decimal = Decimal/16;                       //Updates Hexadecimal by dividing the decimal by 16
    }

    cout << "The Hexadecimal number: " << Hexadecimal;
    return 0;
}