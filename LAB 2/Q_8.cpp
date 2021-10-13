#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Account
{

public:
    string customer_name;
    long Account_numb, balance;
    char type_account;
    void get()
    {
        cout << "Enter the Customer Name : ";
        getline(cin, customer_name);
        cout << "\nEnter the Account Number : ";
        cin >> Account_numb;
        cout << "\nEnter balance : ";
        cin >> balance;
        cout << "Enter the type of Account " << endl;
        cout << "'c' - current Account and 's' -  saving account" << endl;
        cin >> type_account;
    }
    void display()
    {
        cout << "\nCustomer Name : " << customer_name << endl;
        cout << "Account Number : " << Account_numb << endl;
        cout << "Account Type : " << type_account << endl;
        cout << "Balance : " << balance << endl;
    }
    void deposit()
    {
        int amt;
        cout << "\nenter the amount which you want to deposit:";
        cin >> amt;
        // cout << "Balance : " << balance << endl;
        balance = balance + amt;
    }
    void withdraw()
    {
        int amt;
        cout << "\nenter the amount which do you want to withdraw:";
        cin >> amt;
        if (balance > amt)
            balance -= amt;
        else
            cout << "\namount can't be withdrawn due to insufficient balance";
    }
};

class cur_acct : public Account
{
public:
    int intr;

    void comp_intrest()
    {
        int t1, r1 = 10;
        cout << "\n Enter time";
        cin >> t1;
        intr = balance * pow(1 + r1 / 100.0, t1);
        cout << intr;
        balance += intr;
    }
};
class sav_acct : public Account
{
public:
    void min_bal()
    {
        if (balance < 500)
        {
            cout << "\npenality imposed: \nnew balance is:" << balance - 50;
        }
        else
        {
            cout << "\nno penalty imposed\n";
        }
    }
};

int main()
{
    Account A1;
    cur_acct c1;
    sav_acct s1;
    A1.get();
    A1.display();
    if (A1.type_account == 'c' || A1.type_account == 'C')
    {
        c1.type_account = A1.type_account;
        c1.customer_name = A1.customer_name;
        c1.Account_numb = A1.Account_numb;
        c1.balance = A1.balance;
        c1.deposit();
        c1.withdraw();
        c1.display();
    }
    else if (A1.type_account == 's' || A1.type_account == 'S')
    {
        s1.type_account = A1.type_account;
        s1.customer_name = A1.customer_name;
        s1.Account_numb = A1.Account_numb;
        s1.balance = A1.balance;
        s1.deposit();
        s1.withdraw();
        s1.min_bal();
        s1.display();
    }

    return 0;
}