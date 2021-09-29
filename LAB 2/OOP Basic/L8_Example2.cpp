#include <iostream>
using namespace std;
class position
{
public:
    int x;
    int y;
    position()
    {
        x = 4;
        y = 5;
    }
    position(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    position operator+(position p2) //operator overloading
    // //       p1       +          p2

    {
        position new_pos;     //new object is created
        new_pos.x = x + p2.x; //x of newpos obj = x ofp1 + x ofp2
        new_pos.y = y + p2.y; //y of newpos obj = y  of p1 + y of p2
        return new_pos;
    }

    bool operator==(position pos)
    {
        if (x == pos.x && y == pos.y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    position p1(4, 7);
    position p2(4, 7);
    position p3 = p1 + p2;
    cout << p3.x << " " << p3.y;
    if (p1 == p2)
    {
        cout << "\nThey are same" << endl;
    }
    return 0;
}