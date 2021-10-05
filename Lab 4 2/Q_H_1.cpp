
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    while (n--)
    {
        int k, a;
        cin >> k;
        string s;
        cin >> s;
        if (k == 1)
        {
            cin >> a;
            m[s] += a;
        }
        else if (k == 2)
        {
            m[s] = 0;
        }
        else
        {
            cout << m[s] << endl;
        }
    }
    return 0;
}