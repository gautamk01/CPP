#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

void display(list<int> temp)
{

    for (auto it1 = temp.begin(); it1 != temp.end(); ++it1)
    {
        cout << *it1 << "->";
    }
}
void display_list(list<list<int>> temp, list<int> &l2)
{

    for (auto it = temp.begin(); it != temp.end(); ++it)
    {
        list<int> &temp2 = *it;
        for (auto it1 = temp2.begin(); it1 != temp2.end(); ++it1)
        {

            l2.push_back(*it1);
        }
        cout << "\n";
    }
}
int main()
{
    list<list<int>> l1;
    list<int> l2;
    l1 = {{1, 4, 5}, {1, 3, 4}, {2, 6}};
    display_list(l1, l2);
    l2.sort();
    display(l2);
    cout << endl;

    return 0;
}