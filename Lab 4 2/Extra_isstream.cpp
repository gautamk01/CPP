#include <sstream>
#include <iostream>
using namespace std;
int main()
{
    string s = "1 2 3";
    istringstream mystring(s);
    int n;
    while (mystring)
    {
        mystring >> n;
        cout << n << endl;
    }
    return 0;
}