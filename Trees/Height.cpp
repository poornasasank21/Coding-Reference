#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

//
 //Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
int maxDepth(TreeNode *root)
{
    if(!root)return 0;
    int l=maxDepth(root->left)+1;
    int r=maxDepth(root->right)+1;
    return max(l,r);
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}