#include <iostream>
using namespace std;

int main()
{
    cout << "Here are the fundamental data types with byte sizes: \n";
    cout << "---------------------------------------------------\n";
    cout << "A Integer (int) has a size of " << sizeof(char) << " bytes \n";
    cout << "A Character (Char) has a size of " << sizeof(int) << " bytes \n";
    cout << "A Short (short) has a size of " << sizeof(short) << " bytes \n";
    cout << "A Float (float) has a size of " << sizeof(float) << " bytes \n";
    cout << "A Double (double) has a size of " << sizeof(double) << " bytes \n";
    cout << "A Long (long) has a size of " << sizeof(long) << " bytes \n";
    cout << "A Long Double (long double) has a size of " << sizeof(long double) << " bytes \n";
    cout << "A Long Long (long long) has a size of " << sizeof(long long) << " bytes \n";
    cout << "A Boolean (bool) has a size of " << sizeof(bool) << " bytes \n";

    return 0;
}


