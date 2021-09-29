#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 50;
        breadth = 25;
    }
    Rectangle(int len, int bre)
    {
        length = len;
        breadth = bre;
    }

    int Area(int length, int breadth)
    {
        return length * breadth;
    }
    ~Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    void printer()
    {
        int r = Area(length, breadth);
        cout << "The Area of Rectangle : " << r << endl;
    }
};

int main()
{
    Rectangle R1;
    Rectangle R2 = Rectangle(40, 10);
    Rectangle R3 = Rectangle(R2);
    R1.printer();
    R2.printer();
    R3.printer();
    return 0;
}