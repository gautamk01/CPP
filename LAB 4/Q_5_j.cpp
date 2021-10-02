#include <iostream>
#include <array>
#define size_1 10
using namespace std;
int rear = 0;
int front = 0;

void insertion(int x, array<int, size_1> &temp)
{
    if (rear >= size_1)
    {
        cout << "It is overflowing" << endl;
    }
    else
    {
        temp[rear] = x;
        rear++;
    }
}
void deletion(array<int, size_1> &temp)
{
    if (rear != 0)
    {
        for (int i = 0; i < rear; i++)
        {
            temp[i] = temp[i + 1];
        }
        rear--;
    }
    else
    {

        cout << "Sorry the queue is empty" << endl;
    }
}
void display_queue(array<int, size_1> &temp)
{
    cout << "QUEUE : ";
    for (int i = 0; i < rear; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    array<int, 10> Q;
    insertion(1, Q);
    insertion(2, Q);
    insertion(3, Q);
    insertion(4, Q);
    insertion(5, Q);
    insertion(6, Q);
    insertion(7, Q);
    insertion(8, Q);
    insertion(9, Q);
    insertion(10, Q);
    insertion(9, Q);

    display_queue(Q);
    return 0;
}