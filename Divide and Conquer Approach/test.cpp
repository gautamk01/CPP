#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int test_case;
    int friends;
    int add = 0;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        add = 0;
        int R_chest;
        cin >> friends >> R_chest;
        int a[friends];
        for (int j = 0; j < friends; j++)
        {

            cin >> a[j];
        }
        for (int j = 0; j < friends; j++)
        {
            if (R_chest + 1 && R_chest - 1 == a[j])
            {
                add++;
            }
        }
        if (add == 0)
        {
            cout << add + 1 << endl;
        }
        else
        {
            cout << add;
        }
    }

    return 0;
}