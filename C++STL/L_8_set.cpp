#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    //in set there will be any duplicate value and also it will arange in a order asc
    s.insert(1);
    s.insert(1);
    s.insert(42);
    s.insert(52);
    s.insert(16);
    s.insert(16);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    set<int>::iterator it1 = s.begin();
    it1++;
    s.erase(it1); //erase the 1th element of the set
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << "\nis 52 is present in the set or not -> " << s.count(52) << endl;
    cout << "\nis 16 is present in the set or not -> " << s.count(16) << endl; //16 is not present because we just erase that out
    set<int>::iterator it2 = s.find(1);
    cout << "The value is present at : " << *it2 << endl;
    for (auto i = it2; i != s.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}