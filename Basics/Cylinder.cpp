#include <iostream>
using namespace std;

int main()
{
    float Pi = 3.14159265;
    int radius;
    int height;
    float Volume;
    
    cout << "Input the radius of cylinder: \n";
    cin >> radius;
    cout << "Input the height of a cylinder: \n";
    cin >> height;
    
    Volume = Pi * (radius*radius) * height;
    
    cout << Volume;

    return 0;
}