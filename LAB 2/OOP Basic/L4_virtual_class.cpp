#include <iostream>
using namespace std;
//abstract class should have 1 pure virtual function
class Instrument
{
public:
    virtual void music() = 0; //pure virtual class it force every drived class to make it's own implimentation of this function
};

class classic : public Instrument //This is derived class of rock
{
public:
    void music()
    {
        cout << "I am playing classical Guitar " << endl;
    }
};

int main()
{
    Instrument *I1 = new classic();
    I1->music();

    return 0;
}