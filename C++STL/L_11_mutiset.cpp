#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s; //duplicates are allowed
    s.insert(2);
    s.insert(21);
    s.insert(421);
    s.insert(421);
    for (int i : s)
    {
        cout << i << endl;
    }

    return 0;
}