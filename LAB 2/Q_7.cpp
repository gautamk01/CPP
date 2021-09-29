#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    complex(int tempreal = 0, int tempimag = 0)
    {
        real = tempreal;
        img = tempimag;
    }

    complex operator+(complex c2)
    {
        complex temp;
        temp.real = real + c2.real;
        temp.img = img + c2.img;
        return temp;
    }

    complex operator-(complex c2)
    {
        complex temp;
        temp.real = real - c2.real;
        temp.img = img - c2.img;
        return temp;
    }

    void printing()
    {
        cout << real << " + " << img << "i";
    }
};
int main()
{
    complex c1(4, 7);
    complex c2(1, 2);
    complex c3 = c1 + c2;
    complex c4 = c1 - c2;
    cout << "Complex 1 :";
    c1.printing();
    cout << "\nComplex 2 : ";
    c2.printing();
    cout << "\ncomplex addition : ";
    c3.printing();
    cout << "\ncomplex Subtraction : ";
    c4.printing();
    return 0;
}