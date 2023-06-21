#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


// Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

TreeNode* removeLeafNodes(TreeNode* root, int target)
{
    //we should go to bottom and check so appraoch is like this
    //base case
    if(root==NULL)return NULL;
    root->left=removeLeafNodes(root->left,target);
    root->right=removeLeafNodes(root->right,target);
    if(root->val==target && root->left==NULL && root->right==NULL)
    return NULL;
    return root;
}





int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}