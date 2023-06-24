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
 int diameterOfBinaryTree(TreeNode* root)
{
    int m=0;
    int dia=hp(root,m);
    return m;

}
int   hp(TreeNode* root,int &m)
{
    if(root==NULL)return 0;
    
    
    int l=hp(root->left,m),r=hp(root->right,m);
    m=max(m,l+r);
    return 1+max(l,r);

}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}