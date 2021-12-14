#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
unordered_map<string, vector<int>> mapper;

vector<int> diffWaysToCompute(string input)
{
    vector<int> result;
    int len = input.length();

    if (mapper[input].size() > 0)
        return mapper[input];

    for (int i = 0; i < len; i++)
    {
        char c = input[i];

        if (c == '+' || c == '-' || c == '*')
        {
            vector<int> result1 = diffWaysToCompute(input.substr(0, i));
            vector<int> result2 = diffWaysToCompute(input.substr(i + 1));

            for (int j = 0; j < result1.size(); j++)
            {
                for (int k = 0; k < result2.size(); k++)
                {
                    if (c == '+')
                    {
                        result.push_back(result1[j] + result2[k]);
                    }
                    else if (c == '-')
                    {
                        result.push_back(result1[j] - result2[k]);
                    }
                    else
                    {
                        result.push_back(result1[j] * result2[k]);
                    }
                }
            }
        }
    }

    // no operator in input string
    if (result.size() == 0)
    {
        return mapper[input] = {stoi(input)};
    }

    return mapper[input] = result;
}
int main()
{
    vector<int> v;
    v = diffWaysToCompute("2*3-4*5");
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}