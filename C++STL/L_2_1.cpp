
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2(4, 1);   //intalising the vect of size 4 with default value 1
    vector<int> copyv2(v2); //copy the vector
    cout << "Print the vector 2 : " << endl;
    for (int i : v2)
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