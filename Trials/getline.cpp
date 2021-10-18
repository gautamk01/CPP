#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> mylist;
    mylist.push_back(23);
    mylist.push_back(32);
    mylist.pop_front();
    mylist.push_back(12);
    mylist.push_back(114);
    mylist.push_front(52);
    mylist.push_front(432);
    mylist.pop_back();

    for (auto i : mylist)
    {
        cout << i << " ";
    }
}