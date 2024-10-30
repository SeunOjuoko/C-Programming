#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

unsigned long Conversion(char Hex[]) 
{
    char *Hexadecimal;  //Pointer to hexadecimal string
    int length = 0;
    int HexBase = 16;
    unsigned long Decimal = 0;
    int i;
    
    //Loop to calculates the length of Hexadecimal String
    for(Hexadecimal = Hex; *Hexadecimal != '\0'; Hexadecimal++)
    {
        length++;
    }
    
    Hexadecimal = Hex;  //Reset the pointer to the start os the hexadecimal string
    
    //Loop converts each character within the Hexadecimal string to Decimal
    for (i = 0; *Hexadecimal != '\0' && i < length; i++, Hexadecimal++)
    {
        //Decimal (48) is ASCII (0)
        //Decimal (57) is ASCII (9)
        if (*Hexadecimal >= 48 && *Hexadecimal <= 57) {
            //Converts character to Decimal if it's the number (0-9)
            Decimal += (((int)(*Hexadecimal)) - 48) * pow(HexBase, length - i - 1); 
        }
        //Decimal (65) is ASCII (A)
        //Decimal (70) is ASCII (F)
        else if ((*Hexadecimal >= 65 && *Hexadecimal <= 70)) {
            //Converts character to Decimal if it's an uppercase letter (A-F)
            Decimal += (((int)(*Hexadecimal)) - 55) * pow(HexBase, length - i - 1);
        }
        //Decimal (97) is ASCII (a)
        //Decimal (102) is ASCII (f)
        else if (*Hexadecimal >= 97 && *Hexadecimal <= 102) {
            //Converts character to Decimal if it's an uppercase letter (a-f)
            Decimal += (((int)(*Hexadecimal)) - 87) * pow(HexBase, length - i - 1);
        } else 
        {
            cout << " The given hexadecimal number is invalid. \n";
        }
    }
    return Decimal;
}

int main()
{
    unsigned long Decimal;
    char Hex[9];
    
    cout << "Convert Hexadecimal to Decimal number: \n";
    cout << "---------------------------------------------\n";
    cout << "Input the Hexadecimal: ";
    cin >> Hex;
    
    Decimal = Conversion(Hex);

    cout << "The Decimal number is: " << Decimal << "\n";
    return 0;
}