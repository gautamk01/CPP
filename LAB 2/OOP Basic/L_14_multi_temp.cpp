#include <iostream>
using namespace std;
template <class T1, class T2>
class on
{
public:
    T1 a;
    T2 b;
    T2 c;
    void substract(T1 a, T2 b, T2 c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        cout << "Substraction of a and b : " << a - b << endl;
        cout << "Substraction of b and c : " << b - c << endl;
    }
};
int main()
{
    on<int, float> ob1;
    ob1.substract(56, 23.5, 24.3);

    return 0;
}