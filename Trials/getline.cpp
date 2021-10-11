#include <iostream>
using namespace std;
class Distance
{
private:
    int dis;

public:
    Distance()
    {
        dis = 0;
    }
    void display()
    {
        cout << "The distance is " << dis << endl;
    }

    friend void add(Distance &d);
};

void add(Distance &d)
{
    d.dis = d.dis + 5;
}
int main()
{
    Distance d1;
    d1.display();
    add(d1);
    d1.display();

    return 0;
}