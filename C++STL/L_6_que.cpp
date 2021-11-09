#include <iostream>
#include <queue>
using namespace std;

void printqueue(queue<string> &q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
};

int main()
{
    queue<string> q;
    q.push("Ram");
    q.push("Jhone");
    q.push("Jack");
    printqueue(q);
    cout << endl;
    cout << "The size of the queue : " << q.size() << endl;
    cout << "The front element : " << q.front() << endl;
    cout << "The back element : " << q.back() << endl;
    q.pop();
    cout << "The size of the queue : " << q.size() << endl;

    return 0;
}