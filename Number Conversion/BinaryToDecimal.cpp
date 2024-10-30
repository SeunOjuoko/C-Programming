#include <iostream>

using namespace std;

int main()
{
    long Binary;
    long Decimal = 0;
    long j = 1;
    long Remainder;
    
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

    cout << "The Decimal number: " << Decimal;
    return 0;
}