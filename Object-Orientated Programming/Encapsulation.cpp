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
private:                     //Access modifier makes all the attributes of the class accessible outside of the class
    string Name;
    string Owner;
    int Subscribers;
    list <string> Videos;
    
public:
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
    void Subscribe() {
        Subscribers++;
    }
    void Unsubscribe() {
        if (Subscribers > 0)
        Subscribers--;
    }
    void PublishVideo(string title) {
        Videos.push_back(title);
    }
};

int main()
{
    YouTubeChannel Channel("DemarcusCousinsIII","Jidion");
    Channel.PublishVideo("Pranks");
    Channel.PublishVideo("Raw Dawger");
    Channel.PublishVideo("Fuck Tyrone");

    /*Channel.Videos.push_back("Pranks");
    Channel.Videos.push_back("Raw Dawger");
    Channel.Videos.push_back("Fuck Tyrone");*/
    Channel.Subscribe();
    Channel.Subscribe();
    Channel.Unsubscribe();
    
    YouTubeChannel Channel2("Kai Cenat","AMP");
    Channel.PublishVideo("Rizz");
    Channel.PublishVideo("Rizz Pt2");
    Channel.PublishVideo("Sturdy");
    Channel.PublishVideo("eDate");
    /*Channel2.Videos.push_back("Rizz");
    Channel2.Videos.push_back("Rizz Pt2");
    Channel2.Videos.push_back("Sturdy");
    Channel2.Videos.push_back("eDate");*/
    Channel2.Unsubscribe();
    Channel2.Unsubscribe();
    
    Channel.GetInfo();
    Channel2.GetInfo();

    return 0;
}