#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int array[1000];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    for (int i = N - 1; i > -1; i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}