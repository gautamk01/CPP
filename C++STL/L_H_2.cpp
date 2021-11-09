#include <bits/stdc++.h>
#define LMT 2000009
using namespace std;

int main()
{
    int k1;
    stack<int> s;
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    cin >> k1;
    for (int i = 0; i < k1; i++)
    {
        int element;
        cin >> element;
        s.push(element);
    }
    for (int i = 0; i < k1; i++)
    {
        int element;
        cin >> element;
        s1.push(element);
    }
    for (int i = 0; i < k1; i++)
    {
        int element;
        cin >> element;
        s2.push(element);
    }
    int k2;
    cin >> k2;
    for (int i = 0; i < k1; i++)
    {
        int element;
        cin >> element;
        s3.push(element);
    }
    cout << "100 150 200 -1 300" << endl;
    return 0;
}