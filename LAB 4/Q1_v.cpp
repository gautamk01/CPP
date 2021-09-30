#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(23);
    v1.push_back(241);
    v1.push_back(525);
    v1.push_back(14);
    v1.push_back(514);
    // v1.push_front(21);
    // v1.pop_front();
    cout << "The capacity of the given vector is : " << v1.capacity() << endl;
    cout << "The size of the vector is  : " << v1.size() << endl;
    for (int i : v1)
    {
        cout << i << " ";
    }

    return 0;
}