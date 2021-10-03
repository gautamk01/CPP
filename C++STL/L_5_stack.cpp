#include <iostream>
#include <stack>
using namespace std;
void print_stack(stack<int> s2)
{
    for (int i = 0; i < s2.size(); i++)
    {
        cout << s2.top() << " ";
        s2.pop();
    }
}

int main()
{
    stack<string> s;
    stack<int> s2;
    s2.push(13);
    s2.push(15);
    s2.push(178);
    int si = s2.size();
    for (int i = 0; i < si; i++)
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    // s.push("Gautam");
    // s.push("Spider-man");
    // s.push("super-man");
    // cout << "Top Element : " << s.top() << endl;
    // s.pop();
    // cout << "Top Element : " << s.top() << endl;
    // cout << "The size of stack :" << s.size() << endl;
    // cout << "Is the stack is empty : " << s.empty() << endl;
    return 0;
}