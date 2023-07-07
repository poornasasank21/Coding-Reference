#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

void help(TreeNode<int> *root,map<int,vector<int>> &mp,int pos)
{
    if(root==NULL)return ;
    mp[pos].push_back(root->data);
    help(root->left,mp,pos+1);
    help(root->right,mp,pos+1);

}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    map<int,vector<int>> mp;
    vector<int> v;
    help(root,mp,0);
    for(auto a:mp)
    {
        v.push_back(a.second.front());
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