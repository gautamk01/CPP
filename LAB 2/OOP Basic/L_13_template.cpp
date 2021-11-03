#include <iostream>
using namespace std;
//function template
template <class T1>
T1 division(T1 &a, T1 &b)
{
    T1 res = a / b;
    return res;
}
template <class T>
T add(T &a, T &b)
{
    T result = a + b;
    return result;
}
int main()
{
    float a = 13.4;
    float b = 12.4;
    cout << "The sum using template is " << add(a, b) << endl;
    int x = 2;
    int y = 4;
    cout << "The sum using template is " << add(x, y) << endl;
    cout << "The sum using template is " << division(b, a) << endl;

    return 0;
}
