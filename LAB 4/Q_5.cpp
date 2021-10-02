#include <iostream>
#include <queue>
using namespace std;
void print_q(queue<int> temp)
{
    cout << "Queue : ";
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

void add_element(queue<int> q1, queue<int> &q2)
{
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q1;
    queue<int> queueone, queuetwo;

    cout << "Queue status : " << q1.empty() << endl;
    q1.emplace(3);
    q1.emplace(6);
    q1.emplace(7);
    print_q(q1);
    queueone.push(10);
    queueone.push(20);
    queuetwo.push(30);
    queuetwo.push(40);
    queuetwo.push(50);
    cout << "Before swaping" << endl;
    cout << "Q1 ";
    print_q(queueone);
    cout << "Q2 ";
    print_q(queuetwo);
    queueone.swap(queuetwo);
    cout << "After swaping" << endl;
    cout << "Q1 ";
    print_q(queueone);
    cout << "Q2 ";
    print_q(queuetwo);
    cout << "Adding element from Q1 to Q2";
    add_element(queueone, queuetwo);
    cout << "Q2 ";
    print_q(queuetwo);
    cout << "Printing the size of queue" << endl;
    cout << "1. " << q1.size() << endl;
    cout << "2. " << queueone.size() << endl;
    cout << "3. " << queuetwo.size() << endl;
    return 0;
}