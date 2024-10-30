#include <iostream>
using namespace std;

string test(string str, int n)
{
    return str.erase(n,1);
}

int main()
{
    cout << test("Sonic", 4) << endl;
    cout << test("Tails", 1) << endl;
    cout << test("Knuckles", 1) << endl;
    cout << test("Shadow", 1) << endl;
    
    return 0;
}