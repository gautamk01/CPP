#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Gautam");
    s.push("Spider-man");
    s.push("super-man");
    cout << "Top Element : " << s.top() << endl;
    s.pop();
    cout << "Top Element : " << s.top() << endl;
    cout << "The size of stack :" << s.size() << endl;
    cout << "Is the stack is empty : " << s.empty() << endl;
    return 0;
}