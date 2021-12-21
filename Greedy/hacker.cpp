#include <bits/stdc++.h>
using namespace std;
int saver;
void printDuplicates(vector<int> words)
{
    vector<int> duplicate;
    sort(words.begin(), words.end());

    for (int i = 1; i < words.size(); i++)
    {
        if (words[i - 1] == words[i])
        {

            if (duplicate.empty())
                duplicate.push_back(words[i]);
            else if (words[i] != duplicate.back())
                duplicate.push_back(words[i]);
        }
    }

    if (duplicate.size() == 0)
        cout << "1" << endl;
    else
        cout << duplicate.size() << endl;
    saver = duplicate.size();
}

int main()
{

    int n, k;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value = 0;
        vector<int> v1;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int num;
            cin >> num;
            v1.push_back(num);
        }
        int cond;
        for (int j : v1)
        {
            auto it = find(v1.begin(), v1.end(), -j);
            if (it != v1.end())
            {
                value++;
            }
            else
            {
                cond = -1;
            }
        }
        if (cond != -1)
        {
            printDuplicates(v1);
            if (saver != 0)
            {
                cout << saver << " ";
                cout << value - saver;
            }
            else
            {
                cout << value - saver;
            }
        }
        else
        {
            cout << cond;
        }

        cout << "\n";
    }
    return 0;
}