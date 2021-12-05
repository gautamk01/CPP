#include <iostream>
using namespace std;

template <class T2, class T3>
class A
{
public:
    T2 a;
    T3 b;
    A(T2 k, T3 l)
    {
        a = k;
        b = l;
    }
    void display()
    {
        cout << a << " " << b;
    }
};
template <class T, class T01>
T01 myMax(T x, T01 y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << myMax<int, float>(3, 7.12) << endl; // Call myMax for int
    cout << myMax<double>(3.0, 7.0) << endl;    // call myMax for double
    cout << myMax<char>('g', 'e') << endl;      // call myMax for char
    A<int, float> ob1(1, 4.23);
    ob1.display();

    return 0;
}