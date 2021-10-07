
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(2, 0);
    vector<int> v2(4, 1);   //intalising the vect of size 4 with default value 1
    vector<int> copyv2(v2); //copy the vector
    v[0] = 45;
    v[1] = 15;
    cout << "Print the vector 2 : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "\nprinting the copy of vector 2\n";
    for (int i : copyv2)
    {
        cout << i << " ";
    }

    return 0;
}