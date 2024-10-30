/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <list>
using namespace std;


class YouTubeChannel {
public:                     //Access modifier makes all the attributes of the class accessible outside of the class
    string Name;
    string Owner;
    int Subscribers;
    list <string> Videos; 
    
    YouTubeChannel(string name, string owner) { //Constructor for the class
        Name = name;
        Owner = owner;
        Subscribers = 0;
    }
    
    void GetInfo() {                                    //Class method
        cout << "Name: " << Name << endl;
        cout << "Owner: " << Owner << endl;
        cout << "Subscribers: " << Subscribers << endl;
        cout << "Video: " << endl;
        for(string Title: Videos) {
            cout << Title << endl;
        }
    }
};

int main()
{
    YouTubeChannel Channel("DemarcusCousinsIII","Jidion");
    Channel.Videos.push_back("Pranks");
    Channel.Videos.push_back("Raw Dawger");
    Channel.Videos.push_back("Fuck Tyrone");
    /*YouTubeChannel Channel;
    Channel.Name = "DemarcusCousinsIII";
    Channel.Owner = "Jidion";
    Channel.Subscribers = 3000;
    Channel.Videos = {"Pranks", "Raw Dawg", "Fuck Tyrone"};*/
    
    YouTubeChannel Channel2("Kai Cenat","AMP");
    Channel2.Videos.push_back("Rizz");
    Channel2.Videos.push_back("Rizz Pt2");
    Channel2.Videos.push_back("Sturdy");
    Channel2.Videos.push_back("eDate");
    /*YouTubeChannel Channel2;
    Channel2.Name = "Kai Cenat";
    Channel2.Owner = "AMP";
    Channel2.Subscribers = 2000;
    Channel2.Videos = {"Rizz", "Sturdy", "Rizz Pt2", "eDate"};*/
    
    Channel.GetInfo();
    Channel2.GetInfo();
    /*cout << "Name: " << Channel2.Name << endl;
    cout << "Owner: " << Channel2.Owner << endl;
    cout << "Subscribers: " << Channel2.Subscribers << endl;
    cout << "Video: " << endl;
    for(string Title: Channel2.Videos) {
        cout << Title << endl;
    }*/

    return 0;
}