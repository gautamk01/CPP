#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;

public:
    Distance()
    {
        meter = 0;
    }
    void display_data()
    {
        cout << "Meter value : " << meter;
    }
    friend void addvalue(Distance &d); //prototype of friend function
};

void addvalue(Distance &d)
{
    d.meter = d.meter + 5;
}

int main()
{
    Distance D1;
    D1.display_data();

    addvalue(D1); //function call

    D1.display_data();

    return 0;
}