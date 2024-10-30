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
private:
    string Name;
    int Subscribers;
    list <string> Videos;
protected:
    string Owner;

public:          //Access modifier makes all the attributes of the class accessible outside of the class
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
        for(string Title : Videos) {
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

class MusicYouTubeChannel: public YouTubeChannel    //Derived Class with Inheritance
{
    public:
    MusicYouTubeChannel(string name, string owner):YouTubeChannel(name,owner) {
        
    }
    void Description() {
        cout<< Owner <<" has the Top Tracks from the Top Lyricist in Top Dawg Entertainment"<<endl;
    }
};

int main()
{
    MusicYouTubeChannel Channel("Kendrick Lamar","TDE");
    //MusicYouTubeChannel Channel2("Drake","OVO");
    Channel.PublishVideo("Backseat Freestyle");
    Channel.PublishVideo("King Kunta");
    Channel.PublishVideo("DNA");
    Channel.Subscribe();
    Channel.Subscribe();
    //Channel.Unsubscribe();
    Channel.GetInfo();
    Channel.Description();
   // Channel2.Description();
    return 0;
}]