#include <iostream>
#include <vector>
#include <queue>

using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
struct Compareelement
{
    bool operator()(ListNode *const e1, ListNode *const e2)
    {
        return e1->val > e2->val;
    }
};
ListNode *mergeKLists(vector<ListNode *> &lists)
{
    priority_queue<ListNode *, vector<ListNode *>, Compareelement> pq;
    for (auto l : lists)
    {
        if (l)
            pq.push(l);
    }
    if (pq.empty())
    {
        return NULL;
    }
    ListNode *ans = pq.top();
    pq.pop();
    if (ans->next)
    {
        pq.push(ans->next);
    }
    ListNode *temp = ans;
    while (!pq.empty())
    {
        temp->next = pq.top();
        pq.pop();
        temp = temp->next;
        if (temp->next)
            pq.push(temp->next);
    }
    return ans;
}

int main()
{
    return 0;
}