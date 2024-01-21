#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    while (l1!=NULL)
    {
        l1->val+=l2->val;
        l1=l1->next;
        l2=l2->next;
    }
    return l1;
    
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
    }

    return 0;
}