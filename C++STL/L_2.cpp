#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v = {1, 64, 4, 6, 7};
    auto it = v.begin();
    cout << *(it + 1);
    return 0;
}
