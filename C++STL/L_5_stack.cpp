#include <iostream>
#include <stack>
using namespace std;
void print_stack(stack<int> s2, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << s2.top() << " ";
        s2.pop();
    }
}

stack<int> sortFunction(stack<int> &mainStack)
{
    stack<int> AuxStack;

    while (!mainStack.empty())
    {
        // pop out the first element
        int temp = mainStack.top();
        mainStack.pop();

        while (!AuxStack.empty() && AuxStack.top() > temp)
        {
            // pop from Auxstack and push it to the mainstack
            mainStack.push(AuxStack.top());
            AuxStack.pop();
        }

        // push temp in end
        AuxStack.push(temp);
    }

    return AuxStack;
}

int main()
{
    int n;
    int element;
    int k;
    stack<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        s.push(element);
    }
    cin >> k;
    int size = s.size();
    print_stack(s, size);
    cout << endl;
    stack<int> sort_stack = sortFunction(s);
    print_stack(sort_stack, k);
    return 0;
}