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
        cout << endl;
    }
    void deposit()
    {
        int amt;
        cout << "\nenter the amount which you want to deposit:";
        cin >> amt;
        balance = balance + amt;
    }
};

class sav_acct : public Account
{
    int inter;

public:
    int comp_int()
    {
        int time1, rate;
        rate = 10;
        cout << "\n Enter time : ";
        cin >> time1;
        inter = balance * pow(1 + rate / 100.0, time1) - balance;
        return inter;
    }

    void update_bal()
    {
        balance += comp_int();
        cout << "updated" << endl;
    }

    void withdrawal()
    {
        int amt;
        cout << "\n Enter amount to withdrawn : ";
        cin >> amt;
        if (balance >= amt)
        {
            balance -= amt;
        }
        else
        {
            cout << "\n The amount cannot be withdrawn";
        }
    }
};

class cur_acct : public Account
{
    int penal;

public:
    int min_bal()
    {
        int ret = 1;
        if (balance <= 500)
        {
            penal = 50;
            balance -= penal;
            ret = 0;
        }
        else
        {
            cout << "\n No penality imposed";
        }
        return ret;
    }
    void withdrawal()
    {
        int amt;
        cout << "\n Enter the amount to withdrawn";
        cin >> amt;
        int k = min_bal();
        if (k == 1)
        {
            if (balance >= amt)
                balance -= amt;
        }
        else
        {
            cout << "\n The amount cannot be withdrawn";
        }
    }
};

int main()
{
    char k;
    Account A1;
    cur_acct c1;
    sav_acct s1;
    A1.get();
    A1.display();

    {
        if (A1.type_account == 'c' || A1.type_account == 'C')
        {
            c1.type_account = A1.type_account;
            c1.customer_name = A1.customer_name;
            c1.Account_numb = A1.Account_numb;
            c1.balance = A1.balance;

            int key;
            while (key != 4)
            {
                cout << "1.Deposite" << endl;
                cout << "2.withdraw" << endl;
                cout << "3.display" << endl;
                cout << "4.stop" << endl;
                cout << "Your choice : ";
                cin >> key;

                switch (key)
                {
                case 1:
                    c1.deposit();
                    break;
                case 2:
                    c1.withdrawal();
                    break;
                case 3:
                    c1.display();
                    break;
                case 4:
                    cout << "Thank you " << endl;
                    break;
                default:
                    cout << "choose correct option" << endl;
                    break;
                }
            };
        }
        else if (A1.type_account == 's' || A1.type_account == 'S')
        {
            s1.type_account = A1.type_account;
            s1.customer_name = A1.customer_name;
            s1.Account_numb = A1.Account_numb;
            s1.balance = A1.balance;
            s1.update_bal();
            int key;
            while (key != 4)
            {
                cout << "1.Deposite" << endl;
                cout << "2.withdraw" << endl;
                cout << "3.display" << endl;
                cout << "4.stop" << endl;
                cout << "Your choice : ";
                cin >> key;

                switch (key)
                {
                case 1:
                    s1.deposit();
                    s1.update_bal();
                    break;
                case 2:
                    s1.withdrawal();
                    break;
                case 3:
                    s1.display();
                    break;
                case 4:
                    cout << "Thank you " << endl;
                    break;
                default:
                    cout << "choose correct option" << endl;
                    break;
                }
            };
        }
    }

    return 0;
}