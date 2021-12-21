#include <bits/stdc++.h>
using namespace std;
vector<int> coin_changes = {1, 2, 5, 10, 20, 50, 100, 500};
void findMinCoins(int value)
{
    sort(coin_changes.begin(), coin_changes.end());

    vector<int> Result;

    for (int i = coin_changes.size() - 1; i >= 0; i--)
    {
        while (value >= coin_changes[i])
        {
            value = value - coin_changes[i];
            Result.push_back(coin_changes[i]);
        }
    }

    cout << "The value can be achieved in " << Result.size() << " coins as below:" << std::endl;

    for (int i = 0; i < Result.size(); i++)
    {
        cout << Result[i] << " ";
    }
}

int main()
{
    int value;
    cout << "Enter a value : ";
    cin >> value;
    findMinCoins(value);
    return 0;
}