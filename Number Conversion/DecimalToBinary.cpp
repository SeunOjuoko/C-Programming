#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int Decimal; 
    int Remainder; 
    int Quotient;
    int Binary[100];    //Declares an integer array binary with a size 100 to store binary digits
    int i = 1;
    int j;
    
    cout << "Convert a decimal number to binary number: \n";
    cout << "---------------------------------\n";
    cout << "Input a decimal number: \n";
    cin >> Decimal;
    
    //Assigned the decimal number to quoteient
    Quotient = Decimal;
    while (Quotient != 0) {         //Loop convert decimal number to binary
        Binary[i++] = Quotient % 2; //Stores the remainder of division by 2 (binary digit) within the array and increment
        Quotient = Quotient / 2;    //Updates the Quotient by dividing it by 2 (Binary conversion process)
    }
    
    cout << "The binary number is: ";
    for (j = i - 1; j > 0; j--) {
        cout << Binary[j];
    }
    cout << "\n";
    return 0;
}