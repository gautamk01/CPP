#include <iostream>
#include <deque>
using namespace std;
int main()
{
    bool k;
    deque<int> d;
    d.push_back(2);
    d.push_front(41);
    d.push_back(314);
    d.push_front(51);
    cout << "Before poping : " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    d.pop_back();
    d.pop_front();
    cout << endl;
    cout << "After poping : " << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "The 0th element in the index : " << d.at(0) << endl;
    cout << endl;
    cout << "The front element : " << d.front() << endl;
    cout << "The End Element   : " << d.back() << endl;
    k = d.empty();
    cout << "Weather the deque is empty or not in : " << k << endl;
    cout << "Erase function " << endl;
    cout << "Before earase size  :" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase size : " << d.size() << endl;
    return 0;
}