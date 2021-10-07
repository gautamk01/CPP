#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    int n, k, num, num1;
    cout << "Enter number of iterations required :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "1.Insert " << endl;
        cout << "2.Search " << endl;
        cout << "Enter your choice : ";
        cin >> k;
        if (k == 1)
        {
            cin >> num;
            auto it2 = s1.find(num);
            if (it2 != s1.end())
            {
                cout << num << " is already there in the set" << endl;
            }
            else
            {
                s1.insert(num);

                cout << num << " is inserted" << endl;
            }
        }
        else if (k == 2)
        {
            cin >> num1;
            auto it1 = s1.find(num1);
            if (it1 != s1.end())
            {
                cout << *it1 << " is Found :)" << endl;
            }
            else
            {
                cout << num1 << " is not found !!!" << endl;
            }
        }
        else
        {
            cout << "Sorry this is a wrong choice !!!";
        }
    }

    return 0;
}