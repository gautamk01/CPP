#include <iostream>
using namespace std;

class smartphone
{
public:
    virtual void takeselfi() = 0; //
    virtual void makecall() = 0;  //pure virtual function for every vitural function should havesame function inside the inheritance class
};

class android : public smartphone
{
public:
    void takeselfi()
    {
        cout << "Android is taking selfi" << endl;
    }

    void makecall()
    {
        cout << "Android is making call" << endl;
    }
};

class iphone : public smartphone
{
public:
    void takeselfi()
    {
        cout << "Iphone is taking selfi" << endl;
    }

    void makecall()
    {
        cout << "Iphone is making the call" << endl;
    }
};

int main()
{
    smartphone *G1 = new android();
    smartphone *I1 = new iphone();
    I1->takeselfi();
    G1->takeselfi();

    return 0;
}