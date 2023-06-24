#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if(!headA || !headB)return NULL;
    ListNode* d1=headA;ListNode* d2=headB;
    while(d1!=d2)
    {
        

            if(d1==NULL)d1=headB;
            else d1=d1->next;
            if(d2==NULL)d2=headA;
            else d2=d2->next;
        
    }
  return d1;
        
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}