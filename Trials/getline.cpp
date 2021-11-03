#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(4, 0);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i : v)
    {
        cout << i << endl;
    }
    return 0;
}