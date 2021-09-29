#include <iostream>
using namespace std;

struct youtubechannel
{
    string Name;
    int sub;
    youtubechannel(string name, int sub)
    {
        this->Name = name;
        this->sub = sub;
    }
};

ostream &operator<<(ostream &COUT, youtubechannel &youtubechannel)
{
    COUT << "Name : " << youtubechannel.Name << endl;
    COUT << "Subscribers : " << youtubechannel.sub << endl;
    return COUT;
}

int main()
{
    youtubechannel yt1 = youtubechannel("Gamer-Gk", 751);
    cout << yt1;
    return 0;
}