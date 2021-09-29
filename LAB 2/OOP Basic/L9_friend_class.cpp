#include <iostream>
using namespace std;

class train1
{
    friend class train2; //train2 is a friend of train1

private:
    int x;

public:
    train1(int a)
    {
        x = a;
    }
};

class train2
{
public:
    void show_num(train1 obj)
    {
        cout << "The Number of x is " << obj.x;
    }
};

int main()
{
    train1 T1(23);
    train2 T2;
    T2.show_num(T1);

    return 0;
}