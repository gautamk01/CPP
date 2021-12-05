#include <iostream>
#include <map>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> v{"Gautam", "jack", "jhone", "Gautam", "Harrat"};
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    vector<string> v2;
    srand(time(0));
    cout << "Unique randomly set of user Id : ";
    while (v2.size() != v.size())
    {
        int value = rand() % v.size();
        if (find(v2.begin(), v2.end(), v.at(value)) != v2.end())
        {
            continue;
        }
        else
        {
            cout << v.at(value) << " ";
            v2.push_back(v.at(value));
        }
    }
    return 0;
}