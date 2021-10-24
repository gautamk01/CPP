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
    char char_choice; //char variable
    int int_choice;   //int variable
    tollBooth TB1;
    while (char_choice != 27) //char esc==27
    {
        cout << "1.Paying Cars" << endl;
        cout << "2.Non Paying Cars" << endl;
        cout << "Your choice : ";
        char_choice = getch();
        if (char_choice != 27)
        {
            int_choice = char_choice - '0';
            if (int_choice == 1 || int_choice == 2)
            {
                cout << int_choice;
            }
            else
            {
                cout << "invalide key";
            }

            switch (int_choice)
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