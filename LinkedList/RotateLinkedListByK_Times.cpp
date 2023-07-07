#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

 //Definition for singly-linked list.
struct ListNode {
 int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
   
ListNode* rotateRight(ListNode* head, int k) 
{
    if(head==NULL)return head;
    if(head->next==NULL)return head;
    int len=0;
    ListNode* t=head;
    while(t->next)
    {
        len++;t=t->next;
    }
    t->next=head;
    k=k%len;
    while(k--)
    {
        head=head->next;
    }
    t=head->next;
    head->next=NULL;
    return t;


}   

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}