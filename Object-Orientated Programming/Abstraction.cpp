/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

//Abstract class because it has a pure virtual function
class Nintendo {
public:
    virtual void PlayGame() = 0; //Virtual Function
    virtual void PortablePlay() = 0; //Virtual Function
};

class Gamecube : public Nintendo {
public:
    void PlayGame() {
        cout << "Super Smash Bros Melee\n";
    }
    void PortablePlay() {
        cout << "Pokémon Ruby and Sapphire (GBA)\n";
    }
};

class N64 : public Nintendo {
public:
    void PlayGame() {
        cout << "Super Mario 64\n";
    }
    void PortablePlay() {
        cout << "Pokémon Gold and Silver (GBC)\n";
    }
};

int main()
{
    Nintendo* Console1 = new Gamecube();
    Console1 -> PlayGame();
    Console1 -> PortablePlay();


    return 0;
}
