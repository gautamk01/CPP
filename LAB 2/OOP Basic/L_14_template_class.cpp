#include <iostream>
using namespace std;
template <class T>
class multi
{
public:
    T a;
    T b;
    multi(T x, T y)
    {
        a = x;
        b = y;
    }
    void multiple()
    {
        cout << "The Multiplication result is : " << a * b << endl;
    }
};
int main()
{
    multi<int> ob1(1, 4);
    ob1.multiple();

    return 0;
}