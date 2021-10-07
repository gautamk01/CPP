#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> D1;
    D1.push_back(2);
    D1.push_back(52);
    D1.push_back(72);
    D1.push_back(81);
    D1.push_front(60);
    D1.push_front(70);
    D1.pop_front();
    D1.pop_back();
    for (int i : D1)
    {
        cout << i << " ";
    }

    return 0;
}
