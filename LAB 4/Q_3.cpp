#include <iostream>
#include <stack>
using namespace std;

void printstack(stack<int> s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
}
void sortstack(stack<int> s, stack<int> &temp_s)
{
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        while (!temp_s.empty() && temp_s.top() < temp)
        {
            s.push(temp_s.top());
            temp_s.pop();
        }
        temp_s.push(temp);
    }
}
int main()
{
    stack<int> s;
    stack<int> temp;
    s.push(34);
    s.push(3);
    s.push(98);
    s.push(92);
    s.push(23);
    sortstack(s, temp);
    cout << "input : ";
    printstack(s);
    cout << endl;
    cout << "output : ";
    printstack(temp);

    return 0;
}