#include <iostream>
#include <math.h>
using namespace std;

class DF;
class DM
{
    float meter, centi;

public:
    void getdata()
    {
        cout << "\nEnter the distance in(meter-centimeter):";
        cin >> meter >> centi;
    }

    void display()
    {
        cout << "\nThe distance is:";
        cout << meter << " meters and " << centi << " centimeter";
    }
    friend void add(DM, DF);
};
class DF
{
    float inch, feet;

public:
    void getdata()
    {
        cout << "\nEnter the distance in(feet-inch):";
        cin >> feet >> inch;
    }
    void display()
    {
        cout << "\nThe distance is:";
        cout << feet << " feet and " << inch << " inch";
    }
    friend void add(DM, DF);
};

void add(DM a, DF b)
{
    int choice;
    cout << "\nPress 1 for meter-centi: ";
    cout << "\nPress 2 for feet-inch: ";
    cout << "\nEnter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        DM d;
        double c = (a.meter * 100 + a.centi + b.feet * 30.48 + b.inch * 2.54);
        if (c >= 100)
        {
            d.meter = c / 100.0;
            d.centi = fmod(c, 100);
        }
        else
        {
            d.meter = 0;
            d.centi = c;
        }
        d.display();
    }
    else
    {
        DF d;
        double i = (a.meter * 39.37 + a.centi * .3937008 + b.feet * 12 + b.inch);
        if (i >= 12)
        {
            d.feet = i / 12.0;
            d.inch = fmod(i, 12);
        }
        else
        {
            d.feet = 0;
            d.inch = i;
        }
        d.display();
    }
}
int main()
{
    system("cls");
    DM a;
    DF b;
    a.getdata();
    b.getdata();
    add(a, b);
    return 0;
}