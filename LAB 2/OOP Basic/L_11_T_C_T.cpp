#include <iostream>
using namespace std;
int main()
{
    int x, y, z;

    cout << "Enter any two numbers" << endl;
    cin >> x;
    cin >> y;
    try
    {
        if (y == 0)
        {
            throw y;
        }
        else
        {
            float z = x / y;
            cout << "Result is:" << z;
        }
    }
    catch (int y)
    {
        cout << "Exception Caught \n";
    }
    return 0;
}
