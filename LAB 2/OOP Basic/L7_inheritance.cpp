#include <iostream>
#include <list>
using namespace std;
//inheritance

class YoutubeChennel
{
private:
    string Name;

    int Subscribercount;
    list<string> videos; //This is how we declear a List

protected:
    string owner;

public:
    YoutubeChennel(string name, string ownerName)
    {
        Name = name;
        owner = ownerName;
        Subscribercount = 0;
    }

    void GetInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Owner Name : " << owner << endl;
        cout << "Subscriberscount : " << Subscribercount << endl;
        cout << "videos : ";
        for (string videotitle : videos)
        {
            cout << videotitle << "\t";
        }
    }

    void Subscribe()
    {
        Subscribercount++;
    }

    void Unsubscribe()
    {
        if (Subscribercount > 0)
        {
            Subscribercount--;
        }
    }

    void publish_video(string title) //This is how we insert thing to list
    {
        videos.push_back(title);
    }
};

class gamingChannel : public YoutubeChennel //derived class this is how we connect the parent channel to the child channel
{
public:
    gamingChannel(string name1, string ownername1) : YoutubeChennel(name1, ownername1)
    {
    }
    void playgame()
    {
        cout << "\n"
             << owner << " playing FAR CRY 4" << endl; //A veriable that is declear inside the protected can be acced by derived classss
    }
};
int main()
{
    gamingChannel G1("GK Games", "Gautam krishna");
    G1.Subscribe();
    G1.Subscribe();
    G1.Subscribe();
    G1.Unsubscribe();
    G1.publish_video("Crysis 2");
    G1.publish_video("Crysis 3");
    G1.GetInfo();
    G1.playgame();

    return 0;
}