#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> topView(Node *root)
{
    vector<int> v;
    if(!root)return v;
    map<int,int> mp;
    queue<pair<Node*,int>> q;q.push({root,0});

    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        Node *  n=it.first;
        int line=it.second;
        if(mp.find(line)==mp.end())mp[line]=n->data;
        if(root->left)q.push({root->left,line-1});
        if(root->right)q.push({root->right,line+1});

    }
    for(auto a:mp)
    {
        v.push_back(a.second);
    }
    

    return v;
}



int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}