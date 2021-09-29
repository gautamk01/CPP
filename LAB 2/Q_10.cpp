#include <iostream>
using namespace std;

class incometax
{
private:
    int tax;

protected:
    int income;
    char cname[20];

public:
    incometax()
    {
        tax = 0;
        income = 0;
    }
    void input()
    {
        cout << "\nEnter Client Name : ";
        cin >> cname;
        cout << "\nEnter your income : ";
        cin >> income;
    }

    int calc_tax(int income)
    {
        this->income = income;
        if (income <= 50000.00)
            tax = 0;
        else if (income <= 100000.00)
            tax = (income - 50000.00) * 10 / 100;
        else if (income <= 250000.00)
            tax = (income - 100000.00) * 20 / 100 + 5000;
        else
            tax = (income - 250000.00) * 30 / 100 + 5000 + 30000;
        return tax;
    }
    void display()
    {
        cout << "\n Client Name " << cname;
        cout << "\n income " << income;
        cout << "\n tax " << calc_tax(income);
    }
    friend int doctor(incometax);
    friend int engineer(incometax);
};
int doctor(incometax doc)
{
    doc.income = 2000000;
}
int engineer(incometax eng)
{
    eng.income = 3000000;
}

int main()
{
    incometax d1;
    doctor(d1);
    d1.input();
    d1.display();
    incometax e1;
    engineer(e1);
    e1.input();
    e1.display();

    return 0;
}