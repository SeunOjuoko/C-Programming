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
};

int main()
{
    YouTubeChannel Channel;
    Channel.Name = "DemarcusCousinsIII";
    Channel.Owner = "Jidion";
    Channel.Subscribers = 3000;
    Channel.Videos = {"Pranks", "Raw Dawg", "Fuck Tyrone"};
    
    cout << "Name: " << Channel.Name << endl;
    cout << "Owner: " << Channel.Owner << endl;
    cout << "Subscribers: " << Channel.Subscribers << endl;
    cout << "Video: " << endl;
    for(string Title: Channel.Videos) {
        cout << Title << endl;
    }

    return 0;
}