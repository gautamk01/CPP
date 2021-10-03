#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{3, 6, 2, 8, 10};
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin(); //this is how we declear an itrator , itrator is nothing but a pointer
    cout << (*it) << endl;
    auto it1 = v.begin();
    for (it1 = v.begin(); it1 != v.end(); ++it1)
    {
        cout << *it1 << " ";
    }
    return 0;
}