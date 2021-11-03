#include <iostream>
using namespace std;
namespace first
{
    void sayhello()
    {
        cout << "Hi Gautam" << endl;
    }
}
namespace second
{
    void sayhello()
    {
        cout << "Hi rajesh" << endl; //create a new line and fleshes the stream and it is also an object of ostream
    }
}
int main()
{
    first::sayhello();
    second::sayhello();

    return 0;
}