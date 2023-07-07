#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

template <typename T>
class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

void helpBottomVeiw(BinaryTreeNode<int> * root ,map<int,int> &m,int pos)
{
    if(root==NULL )return ;
    m[pos]=(root->data);
    helpBottomVeiw(root->left,m,pos-1);
    helpBottomVeiw(root->right,m,pos+1);
}


vector<int> bottomView(BinaryTreeNode<int> * root)
{
    vector<int> v;
    map<int,int> m;
    helpBottomVeiw(root,m,0);
    for(auto a:m)
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