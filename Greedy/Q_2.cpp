#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, value;
        cin >> N >> K;
        vector<int> vect;
        int sum = 0, sum1 = 0, sum2 = 0;
        for (int i = 0; i < N; i++)
        {

            cin >> value;
            vect.push_back(value);
        }
        sort(vect.begin(), vect.end());

        for (int i = 0; i < N; i++)
        {
            sum += vect[i];
            if (i < K)
                sum1 += vect[i];
            if (i >= N - K)
            {
                sum2 += vect[i];
                cout << vect[i] << endl;
            }
        }
        cout << max(abs(sum - 2 * sum1), abs(sum - 2 * sum2)) << "\n";
    }
}