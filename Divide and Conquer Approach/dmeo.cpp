#include <iostream>
using namespace std;
int damn(int x)
{
    int i = 0;
    int result = 64;
    while (i <= 4)
    {
        if (i == x)
        {
            return 3;
        }
        i++;
    }
    return result;
}
int main()
{
    cout << damn(25);
    return 0;
}