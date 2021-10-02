

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> v;
        int temp = 0;
        int size_t = target.size();
        for (int i = 1; i <= n; i++)
        {
            if (temp >= size_t)
            {
                break;
            }
            if (target[temp] == i)
            {
                v.push_back("push");
                temp++;
            }
            else
            {
                v.push_back("push");
                v.push_back("pop");
            }
        }
        return v;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 3};
    vector<string> ans;

    int n = 3;
    ans = s.buildArray(v, n);
    for (string i : ans)
    {
        cout << i << " ";
    }

    return 0;
}