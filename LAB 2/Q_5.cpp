#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth
{
private:
    unsigned int total_car;
    double total_money;

public:
    tollBooth()
    {
        total_car = 0;
        total_money = 0;
    }
    void paying_car()
    {
        total_car++;
        total_money += 0.50;
    }
    void nonpay_Car()
    {
        total_car++;
        total_money += 0;
    }
    void display()
    {
        cout << "Totoal Cars : " << total_car << endl;
        cout << "Total Money : " << total_money << endl;
    }
};

int main()
{
    char key; //char
    int keyi; //int
    tollBooth TB1;
    while (key != 27) //char esc==27
    {
        cout << "1.Paying Cars" << endl;
        cout << "2.Non Paying Cars" << endl;
        cout << "Your choice : ";
        key = getch();
        if (key != 27)
        {
            keyi = key - '0'; // covnvertion of char value to int
            cout << keyi;
            switch (keyi)
            {
            case 1:
                TB1.paying_car();
                break;
            case 2:

                TB1.nonpay_Car();
                break;
            default:
                cout << "\nSorry,invalide Key" << endl;
                break;
            }
        }
        cout << "\n"
             << endl;
    };
    TB1.display();

    return 0;
}