/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class TylerTheCreator { //Abstract class is a class that has pure virtual function
public:
//Virtual checks if theres any implementation in the function in a derive class then FlowerBoy is executed, otherwise Freestyle() is the default execution
    virtual void Freestyle() = 0; //Pure virtual function
};

//FlowerBoy has been a derived class of the base class TylerTheCreator
//":" represents the inheritance
class FlowerBoy : public TylerTheCreator {
public:
    void Freestyle() {
        cout << "Fireworks, I feel like glitter. And every time you come around, I feel like glitter  \n";
    }    
};

class Igor : public TylerTheCreator {
public:
    void Freestyle() {
        cout << "Oh, you make my Earthquake. Riding around, your love be shakin’ me up. And it's making my heart break  \n";
    }    
};

int main() {
    TylerTheCreator* Rap1 = new FlowerBoy();//* Creates the pointer
    //Rap1->Freestyle();
    TylerTheCreator* Rap2 = new Igor();//* Creates the pointer
    //Rap2->Freestyle();
    
    TylerTheCreator* BestHits[2] = {Rap1, Rap2};
    for (int i = 0; i,2; i++)
    {
        BestHits[i] -> Freestyle(); 
    }
    return 0;
}