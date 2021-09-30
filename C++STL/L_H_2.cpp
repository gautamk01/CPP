#include <iostream>
#include <vector>
using namespace std;
int main()

{
    int n, n1, n2, n3;
    cin >> n;
    vector<int> vectornum(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vectornum[i];
    }
    cin >> n1;
    cin >> n2 >> n3;
    vectornum.erase(vectornum.begin() + n1);
    vectornum.erase(vectornum.begin() + n2, vectornum.begin() + n3);
    cout << vectornum.size();
    for (int i : vectornum)
    {
        cout << i << " ";
    }

    return 0;
}