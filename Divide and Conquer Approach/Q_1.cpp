
#include <iostream>
using namespace std;
int findSqrt(int x)
{
    // base case
    if (x < 2)
    {
        return x;
    }
    int result;
    int start = 0;
    int end = x;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            start = mid + 1;
            result = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    // return result
    return result;
}

int main()
{
    for (int i = 0; i <= 16; i++)
    {
        cout << "Sqrt of " << i << " is : " << findSqrt(i) << endl;
    }

    return 0;
}