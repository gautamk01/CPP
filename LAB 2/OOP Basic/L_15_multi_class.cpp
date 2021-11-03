#include <iostream>
using namespace std;
template <class T1, class T2>
class shower
{
public:
    T1 a;
    T2 b;
    shower(T1 a, T2 b)
    {
        this->a = a;
        this->b = b;
    }
    void show()
    {
        cout << "The value of a is : " << a << " The value of be is : " << b << "\n";
    }
};
int main()
{
    shower<int, float> ob1(112, 23.53);
    shower<int, char> ob2(12, 'w');
    ob1.show();
    ob2.show();
    return 0;
}