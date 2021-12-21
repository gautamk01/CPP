#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxprofit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            maxprofit += max(prices[i] - prices[i - 1], 0);
        }
        return maxprofit;
    }
};
int main()
{
    Solution s;
    vector<int> v1{7, 1, 5, 3, 6, 4};
    cout << s.maxProfit(v1);

    return 0;
}