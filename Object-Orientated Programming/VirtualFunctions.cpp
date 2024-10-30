// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class TylerTheCreator {
public:
//Virtual checks if theres any implementation in the function in a derive class then FlowerBoy is executed, otherwise Freestyle() is the default execution
    virtual void Freestyle() { 
        cout << "Dayum, Tyler really be spitting that fresh heat straight from the dome \n";
    }
};

//FlowerBoy has been a derived class of the base class TylerTheCreator
//":" represents the inheritance
class FlowerBoy : public TylerTheCreator {
public:
    void Freestyle() {
        cout << "Fireworks, I feel like glitter. And every time you come around, I feel like glitter  \n";
    }    
};

int main() {
    TylerTheCreator* Rap = new FlowerBoy();//* Creates the pointer
    Rap->Freestyle();
    return 0;
}