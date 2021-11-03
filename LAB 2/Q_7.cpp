#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int t_real, int t_imag)
    {
        real = t_real;
        img = t_imag;
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
    complex c1(6, 9);
    complex c2(8, 3);
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