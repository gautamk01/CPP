#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        map<char, int> count;

        for (char c : s)
        {
            if (count.find(c) == count.end())
            {
                count[c] = 1;
            }
            else
            {
                count[c] += 1;
            }
        }

        for (char c : t)
        {
            map<char, int>::iterator it = count.find(c);
            if (it == count.end())
            {
                return false;
            }
            else if (count[c] > 1)
            {
                count[c] -= 1;
            }
            else
            {
                count.erase(it);
            }
        }

        if (count.empty())
            return true;
        return false;
    }
};
int main()
{
    Solution s;
    string s1, s2;
    cin >> s1 >> s2;
    cout << (s.isAnagram(s1, s2) ? "true" : "false");

    return 0;
}