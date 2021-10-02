#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void print_vect(vector<int> temp)
{
    for (int i : temp)
    {
        cout << i << " ";
    }
    cout << endl;
}
void min(priority_queue<vector<int>> temp)
{
    while (!temp.empty())
    {
        if (temp.size() == 1)
        {
            print_vect(temp.top());
        }
        temp.pop();
    }
}
int main()
{

    priority_queue<vector<int>> pq;

    cout << "Test case - 1 " << endl;
    vector<int> v1{10, 20, 30, 40};
    vector<int> v2{10, 20, 35, 40};
    pq.push(v1);
    pq.push(v2);
    min(pq);
    pq.pop();
    pq.pop();
    cout << "Test case - 2" << endl;
    vector<int> v3{10, 20, 30, 40};
    vector<int> v4{10, 20, 35, 40};
    vector<int> v5{30, 25, 10, 50};
    pq.push(v3);
    pq.push(v4);
    pq.push(v5);
    min(pq);
    pq.pop();
    pq.pop();
    pq.pop();
    cout << "Test case - 3" << endl;
    vector<int> v6{10, 20, 30, 40};
    vector<int> v7{10, 20, 35, 40};
    vector<int> v8{30, 25, 10, 50};
    vector<int> v9{20, 10, 30, 40};
    vector<int> v10{20, 10, 30, 40};
    vector<int> v11{5, 10, 30, 40};
    pq.push(v6);
    pq.push(v7);
    pq.push(v8);
    pq.push(v9);
    pq.push(v10);
    pq.push(v11);
    min(pq);

    return 0;
}