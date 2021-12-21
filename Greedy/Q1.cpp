#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int luck, imp;
    int balance = 0;
    int count = 0;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> luck >> imp;
        if (imp)
        {
            v1.push_back(luck);
            count++;
        }
        {
            balance += luck;
        }
    }
    sort(v1.begin(), v1.end());
    int subber = 0;
    for (int i = 0; i < (count - k); i++)
    {
        subber += v1[i];
    }
    cout << balance - (2 * subber);
    return 0;
}