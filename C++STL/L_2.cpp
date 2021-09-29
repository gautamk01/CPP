#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << endl;
    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(134);
    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(252);
    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(312);
    cout << "Capacity ->" << v.capacity() << endl;
    v.push_back(1234); //capacity -how many space is occupied
    cout << "Capacity ->" << v.capacity() << endl;
    cout << "size ->" << v.size() << endl;
    //size - how many element are present in vector
    cout << "Element at 2nd Index " << v.at(2) << endl;
    cout << "Front ->" << v.front() << endl;
    cout << "back ->" << v.back() << endl;
    cout << "\n\n";
    cout << "before POP" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n\n";
    v.pop_back();
    cout << "After POP" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";
    cout << "before clear size " << v.size() << endl;
    v.clear(); //in this process size will be zero but capacity will not be zero
    cout << "After clear size " << v.size() << endl;
    cout << "\nAfter clear size the capacity is  " << v.capacity() << endl;

    return 0;
}