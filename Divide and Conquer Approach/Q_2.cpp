#include <iostream>
using namespace std;
int countone(int a[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] == 0)
        {
            if (a[mid - 1] == 1 || mid == 0)
            {
                return mid;
            }
            else
            {
                end = mid - 1;
            }
        }
        else
        {
            if (a[mid + 1] == 0 || mid == n - 1)
            {
                return mid;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
}
int main()
{
    int a[] = {1, 1, 1, 1, 1, 0, 0, 0};
    int n = sizeof(a) / sizeof(a[0]);
    cout << countone(a, n);
    return 0;
}