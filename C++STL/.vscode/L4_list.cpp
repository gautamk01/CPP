#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(14);
    l.push_front(214);
    l.push_back(245);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "After erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "\nThe size of list is : " << l.size() << endl;

    //copy list
    list<int> m(l);
    for (int i : m)
    {
        cout << i << " ";
    }
    cout << endl;
    //parametric list
    list<int> k(4, 100);
    for (int i : k)
    {
        cout << i << " ";
    }
    return 0;
}