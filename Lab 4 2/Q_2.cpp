#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
// void print_set(set<int> s1)
// {
//     cout << "Set : " << endl;
//     for (int i : s1)
//     {
//         cout << i << " ";
//     }
// }
int main()
{
    multiset<int> s1;
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
            s1.insert(num);
            cout << num << " is inserted" << endl;
        }
        else if (k == 2)
        {
            cin >> num1;
            auto it1 = s1.find(num1);
            if (it1 != s1.end())
            {
                cout << *it1 << " is Found and " << s1.count(*it1) << " times in the array" << endl;
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