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
    int Rating;

public:          //Access modifier makes all the attributes of the class accessible outside of the class
    YouTubeChannel(string name, string owner) { //Constructor for the class
        Name = name;
        Owner = owner;
        Subscribers = 0;
        Rating = 0;
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
    void Analytics() {
        if (Rating < 5) {
            cout << Name << " has bad quality content" << endl;
        }else{
            cout << Name << " has great quality content" << endl;
        }
    }
};

class MusicYouTubeChannel: public YouTubeChannel    //Derived Class with Inheritance
{
    public:
    MusicYouTubeChannel(string name, string owner):YouTubeChannel(name,owner) {
        
    }
    void Description() {
        cout<< Owner <<" has the Top Tracks from the Top Lyricist in Top Dawg Entertainment"<<endl;
        Rating++;
    }
};

class ComedyYouTubeChannel: public YouTubeChannel    //Derived Class with Inheritance
{
    public:
    ComedyYouTubeChannel(string name, string owner):YouTubeChannel(name,owner) {
        
    }
    void Description() {
        cout<< Owner <<" has the funniest content from the best comedy group AMP"<<endl;
         Rating++;
    }
};

int main()
{
    MusicYouTubeChannel MusicChannel("Kendrick Lamar","TDE");
    ComedyYouTubeChannel ComedyChannel("Kai Cenat","AMP");
    
    //Polymorphism is used with the same procedural name (Description()) that have different procedural outputs  
    MusicChannel.Description();
    ComedyChannel.Description();
    MusicChannel.Description();
    MusicChannel.Description();
    MusicChannel.Description();
    MusicChannel.Description();
    ComedyChannel.Description();
    
    YouTubeChannel* Channel1 = &MusicChannel; //Channel1 is the first Pointer of based class
    YouTubeChannel* Channel2 = &ComedyChannel; //Channel2 is the first Pointer of based class
    
    Channel1->Analytics(); //-> is used when evoking methods with pointers
    Channel2->Analytics();
    
    return 0;
}

