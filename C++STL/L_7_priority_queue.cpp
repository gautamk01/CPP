#include <iostream>
#include <queue>
using namespace std;
int main()
{
    //In priority queue the first element will be the greatest of all
    system("cls");
    //max - heap
    priority_queue<int> max;

    //Min - heap
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(23);
    max.push(14);
    max.push(52);
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;
    min.push(68);
    min.push(12);
    min.push(52);
    min.push(25);
    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }

    return 0;
}