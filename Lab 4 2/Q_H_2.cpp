#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cin >> num;
    set<int> s;
    while (num--)
    {
        int k, a;
        cin >> k;
        cin >> a;
        if (k == 1)
        {
            s.insert(a);
        }
        else if (k == 2)
        {

            s.erase(a);
        }
        else
        {
            auto itr = s.find(a);
            if (itr == s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
