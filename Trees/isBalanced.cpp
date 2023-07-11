#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
bool flag;
int height(TreeNode* root)
{
    if(!root)return 0;
    int l=height(root->left)+1;
    int r=height(root->right)+1;
    if(abs(l-r)>1)flag=false;

    return max(l,r);
}

bool isBalanced(TreeNode* root)
{
    if(!root)return true;
    int h=height(root);
    return flag;
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}