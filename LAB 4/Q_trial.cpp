#include <iostream>
#include <stack>
using namespace std;
void printstack(stack<int> temp)
{
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
}

void sort_s(stack<int> s, stack<int> &temp)
{
    while (!s.empty())
    {
        int t = s.top();
        s.pop();
        while (!temp.empty() && temp.top() < t)
        {
            s.push(temp.top());
            temp.pop();
                }
        temp.push(t);
    }
}

int main()
{
    stack<int> s;
    stack<int> temp;
    system("cls");
    s.push(24);
    s.push(2);
    s.push(9);
    // cout << s.size() << endl;
    printstack(s);
    sort_s(s, temp);
    cout << endl;
    printstack(temp);
    // cout << s.size() << endl;
    return 0;
}