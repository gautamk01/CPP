#include <iostream>
#include <vector>
using namespace std;

vector<int> beautifulArray(int N)
{
    vector<int> res = {1};
    while (res.size() < N)
    {
        vector<int> tmp;
        for (int i = 0; i < res.size(); i++)
        {
            if ((res[i] * 2 - 1) <= N)
            {
                tmp.push_back(res[i] * 2 - 1);
            }
        }

        for (int i = 0; i < res.size(); i++)
        {
            if ((res[i] * 2) <= N)
            {
                tmp.push_back(res[i] * 2);
            }
        }

        res = tmp;
    }
    return res;
}
int main()
{
    vector<int> v1 = beautifulArray(4);
    for (int i : v1)
    {
        cout << i << " ";
    }
    return 0;
}