#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class doctor
{
    int ds;

public:
    void input()
    {
        cout << "\nenter doctors salary : ";
        cin >> ds;
    }
    void display()
    {
        cout << " \nsalary of doctor : " << ds;
    }
    friend class incometax;
};

class engineer
{
    int es;

public:
    void input()
    {
        cout << "\nenter engineer salary : ";
        cin >> es;
    }
    void display()
    {
        cout << "\nsalary of engineer : " << es;
    }
    friend class incometax;
};

class incometax
{
private:
    int d_tax;
    int e_tax;

public:
    void tax_dis(doctor d, engineer e)
    {
        d.input();
        e.input();
        e.display();
        d.display();
        cout << "\nTax for doctor :" << calc_tax(d.ds) << endl;
        cout << "Tax for engineer :" << calc_tax(e.es) << endl;
    }

    double calc_tax(int income)
    {
        double tax;
        if (income <= 50000.00)
            tax = 0;
        else if (income <= 100000.00)
            tax = (income - 50000.00) * 10 / 100.0;
        else if (income <= 250000.00)
            tax = ((income - 100000.00) * 20 / 100.0) + 5000;
        else
            tax = ((income - 250000.00) * 30 / 100.0) + 5000 + 30000;
        return tax;
    }
};

int main()
{

    incometax i;
    doctor D;
    engineer E;
    i.tax_dis(D, E);

    return 0;
};