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
    complex(int tempreal, int tempimag)
    {
        real = tempreal;
        img = tempimag;
    }

    complex addit(complex c1, complex c2)
    {
        complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
    }
    complex multi(complex c1, complex c2)
    {
        complex temp;
        temp.real = (c1.real * c2.real) - (c1.img * c2.img);
        temp.img = (c1.real * c2.img) + (c1.img * c2.real);
        return temp;
    }

    void printing()
    {
        cout << real << " + " << img << "i";
    }
};
int main()
{
    complex c1(6, 13);
    complex c2(3, 34);
    complex c3 = c3.addit(c1, c2);
    complex c4 = c4.multi(c1, c2);
    cout << "Complex 1 :";
    c1.printing();
    cout << "\nComplex 2 : ";
    c2.printing();
    cout << "\ncomplex addition : ";
    c3.printing();
    cout << "\ncomplex Multiplycation : ";
    c4.printing();

    return 0;
}