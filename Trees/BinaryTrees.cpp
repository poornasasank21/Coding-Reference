#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left, *right;
};

bool isSametree(TreeNode *s,TreeNode *t)
{
    if(s==NULL && t==NULL)
    return true;
    if(s==NULL || t==NULL)
    return false;
    if( s->val==t->val)
    return isSametree(s->left,t->left)&&isSametree(s->right,t->right);
    return false;
}
bool isSubTree(TreeNode *s, TreeNode *t)
{
    if(s==NULL)return false;
    if(isSametree(s,t))return true;
    return isSubTree(s->left,t)||isSubTree(s->right,t);
}

vector<vector<int>> levelOrder(TreeNode* root) 
{
    vector<vector<int>> v;
    if(root==NULL)return v;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty())
    {
        vector<int> vv;
        int size=q.size();
        for (int i = 0; i < size; i++)
        {
            TreeNode *temp=q.front();
            vv.push_back(temp->val);
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
            q.pop();
        }
        v.push_back(vv);
        
    }
    
    return v;
}

vector<int> preorderTraversal(TreeNode* root)
{
    vector<int> v;
    
    return v;
}

vector<int> preorderTraversal(TreeNode* root)
{
    vector<int> v;
    if(root == NULL)return v;
    stack<TreeNode*>s;
    s.push(root);
    while (!s.empty())
    {
        v.push_back(s.top()->val);
        root=s.top();s.pop();
        if(root->right != NULL)s.push(root->right);
        if(root->left != NULL)s.push(root->left);
        // s.pop();
    }
    
    return v;
}

vector<int> inorderTraversal(TreeNode* root)
{
    vector<int> v;
    TreeNode* node=root;
    stack<TreeNode*> st;
    while (true)
    {
        if(!node)
        {
            st.push(node);
            node=node->left;
        }
        else
        {
            if(st.empty())break;
            else
            {
                node=st.top();
                st.pop();
                v.push_back(node->val);
                node=node->right;
            }
        }
    }
    

    return v;
}

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
{
    set<int> s( nums1.begin(), nums1.end() );
    nums1.assign(s.begin(),s.end());
    set<int> skk( nums2.begin(), nums2.end() );
    nums2.assign(skk.begin(),skk.end());
    set<int> s1,s2;
    for(auto a:nums1)
    {
        s1.insert(a);
    }
    for(auto a:nums2)
    {
        s2.insert(a);
    }
    vector<vector<int>> v; 
    vector<int> v1;
    for(auto a:nums1)
    {
        if(s2.find(a)==s2.end())
        v1.push_back(a);

    }v.push_back(v1);
    v1.clear();
    for(auto a:nums2)
    {
        if(s1.find(a)==s1.end())
        v1.push_back(a);

    }v.push_back(v1);
    return v;
}

vector<int> postorderTraversal(TreeNode* root)
{
    vector<int> ans;
    TreeNode* cur=root;
    if(!cur)return ans;
    stack<TreeNode*> st;
    while(cur!=NULL || !st.empty())
    {
        if(cur)
        {
            st.push(cur);
            cur=cur->left;
        }
        else
        {
            TreeNode* temp=st.top()->right;
            if(!temp)
            {
                temp=st.top();
                st.pop();
                ans.push_back(temp->val);
                while (!st.empty() && temp==st.top()->right)
                {
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }
                
            }
            else
            cur=temp;
        }
    }

    return ans;
}

bool isBalanced(TreeNode* root)
{
    if(root==NULL)
    return true;
    if(maxDepth(root)==-1)return false;
    else return true;


}

int maxDepth(TreeNode *root)
{
    if(!root)return 0;
    int lh=maxDepth(root->left);
    if(lh==-1)return -1;
    int rh=maxDepth(root->right);
    if(rh==-1)return -1;
    if(abs(rh-lh)>1)return -1;
    return 1+(max(lh,rh));
}
int diameterOfBinaryTree(TreeNode* root)
{
    int dia=0;
    int k=helpingFUnctionForDiameter(root,dia);
    return dia;
}

int helpingFUnctionForDiameter(TreeNode *root,int &dia)
{
    if(!root)return 0;
    int lh=helpingFUnctionForDiameter(root->left,dia), rh=helpingFUnctionForDiameter(root->right,dia);
    dia=max(dia,lh+rh);
    return 1+max(lh,rh);
}

int maxPathSum(TreeNode* root)
{
    int maxi=INT_MIN;
    int t=maxPathSumHelpingFunction(root,maxi);
    return maxi;
}

int maxPathSumHelpingFunction(TreeNode* root,int &maxi)
{
    if(!root)return 0;
    int ls=max(0,maxPathSumHelpingFunction(root->left,maxi));
    int rs=max(0,maxPathSumHelpingFunction(root->right ,maxi));
    maxi=max(maxi,root->val+ls+rs);
    return root->val+max(ls,rs);
}

vector<vector<int>> zigzagLevelOrder(TreeNode* root)
{
    vector<vector<int>> ans;
    bool flag=true;
    if(root==NULL)return ans;
    queue<TreeNode*> q;q.push(root);
    while(!q.empty())
    {
        vector<int> v;
        for (int i = 0; i < q.size(); i++)
        {
        
        TreeNode* temp=q.front();q.pop();
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        v.push_back(root->val);
        }
    if(flag)
    {
        ans.push_back(v);
        flag=!flag;
    }
    
    else  {
        reverse(v.begin(),v.end());
        ans.push_back(v);
        flag=!flag;
    }
    
    }
    
    return ans;
}

//A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; 

bool isLeaf(Node* root)
{
    if(root->left==NULL && root->right==NULL)return true;
     return false;
}
void leftBoundary(Node* root,vector<int> &ans)
{
    Node *cur=root->left;
    while (cur)
    {   
        if(!isLeaf(root))ans.push_back(cur->data);
        if(cur->left)cur=cur->left;
        else cur=cur->right;
    }
    
    return;
}

void getLeafNodesFromLToR(Node* root,vector<int> &ans)
{
    if(isLeaf(root)){
    ans.push_back(root->data);
    return ;}
    getLeafNodesFromLToR(root->left,ans);
    getLeafNodesFromLToR(root->right,ans);
    return;
}
void getRightBoundaryInreverse(Node* root,vector<int> &ans)
{
    Node* cur=root;
    cur=cur->right;
    vector<int> v;
    while(cur)
    {
        if(!isLeaf(cur))v.push_back(cur->data);
        if(cur->right)cur=cur->right;
        else cur=cur->left;
    }
    for (int i = v.size()-1; i>-1; i--)
    {
        ans.push_back(v[i]);
        
    }
    
}
vector <int> boundary(Node *root)
{
    vector <int> ans;
    if(root==NULL)return ans;
    if(!isLeaf(root))
    ans.push_back(root->data);
    leftBoundary(root,ans);
    getLeafNodesFromLToR(root,ans);
    getRightBoundaryInreverse(root,ans);
    return ans;
}
void checkverticalSum(TreeNode* r,map<int,int> m,int level)
{
    if(r==NULL)return;
    m[level]+=r->val;
    checkverticalSum(r->left,m,level-1);
    checkverticalSum(r->right,m,level+1);
}
vector<int> verticalSum(TreeNode* r) 
{
			vector<int> ans;
			map<int,int> m;
            checkverticalSum(r,m,0);
            for(auto a:m)
            ans.push_back(a.second);
			// TODO:  Just complete given function and 
			// return list containing sum of each vertical level of the tree, going from left to right
			// Input Reading and Output Printing is already taken care
			return ans;
}

TreeNode* invertTree(TreeNode* root) 
{
    if(root==NULL)
    return root;
    if(root->left && root->right)
    {
        TreeNode* temp=root->left;
        
    }

    return root;
}

struct BTNode{
	int val;
	BTNode *left, *right;
};


void helpcountLeafNodes(BTNode *root,int &c)
{
    if(!root->left && !root->right )
    {
        c++;
        return;
    }
    if(root->left)
    helpcountLeafNodes(root->left,c);
    if(root->right)helpcountLeafNodes(root->right,c);
} 
int countLeafNodes(BTNode *root)
{
    int c=0;
    helpcountLeafNodes(root,c);
    return c;
}

// struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode(int x) : val(x), next(NULL) {}
//   };

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if(!headA || !headB)return NULL;
    ListNode* d1=headA;ListNode* d2=headB;
    while(true)
    {
        if(d1==d2)
        {
            return d1;
        }
        else
        {
            if(!d1)d1=headB;
            else d1=d1->next;
            if(!d2)d2=headA;
            else d2=d2->next;
        }
    }
}

bool hasCycle(ListNode *head)
{
    if(!head)return NULL;
    ListNode* s=head;ListNode* f=head;
    
    while(true)
    {
        
        if(!f->next || !f->next->next)return false;
        s=s->next;f=f->next->next;
        if(s==f)return s;
    }
}

ListNode* reverseKGroup(ListNode* head, int k)
{
    
}

int print2largest(int arr[], int n)
{
    map<int,int> mp;
    // for(auto a:arr)mp[a]++;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    
    int i=1;
    if(mp.size()==1)return -1;
    for(auto a:mp)
    {
        if(i==mp.size()-1)return a.first;
        i++;
    }
}

int pivotInteger(int n)
{
    if(n==1)return 1;
    int sum=(n*(n+1))/2;
    for(int i=1;i<n;i++)
    {
        int fs=i*(i+1)/2;
        int ss=sum-fs+i;
        if(ss==fs)return i;
        
    }
    return -1;
}

int appendCharacters(string s, string t)
{
    int i=0,sl=s.length(),tl=t.length();
    vector<int> v;
    
    for(int k=0;k<tl;k++)
    {
        while(i<sl && )
    }
    return tl-k;
}
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
ListNode* reverseList(ListNode* head)
{
    ListNode* dummy=new ListNode();
    ListNode* h=head;
    ListNode* next=head->next;
    while(head)
    {
        head->next=dummy;
        dummy=head;
        head=next;
        next=next->next;
    }
    return dummy;
}

ListNode* reverseKGroup(ListNode* head, int k)
{
    ListNode* cur=head;
    int count=0;
    while(cur)
    {
        count++;cur=cur->next;
    }
    // cout<<count;
    ListNode* ref=NULL;ref->next=head;
    return cur;
}

int commonFactors(int a, int b)
{int c=0;
    for(int i=1;i<min(a,b);i++)
    {
        if(a%i==0 && b%i==0)c++;
    }
    return c;
}

ListNode* reverseKGroup(ListNode* head, int k) 
{
    ListNode* temp=head;
    int c=0;while(temp)
    {
        c++;
        temp=temp->next;
    }
    if(c<=1)return head;
    node* pre = dummyHead;
    node* cur;
    node* nex;
    
    while(c >= k) {
        cur = pre->next;
        nex = cur->next;
        for(int i=1;i<k;i++) {
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        length -= k;
    }
    return dummyHead->next;
}


ListNode* reverseList(ListNode* head)
{
    ListNode* d=NULL;
    while(head!=NULL)
    {
        ListNode* nextt=head->next;
        head->next=d;
        d=head;
        head=nextt;

    }
    return d;
}

ListNode* middleNode(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;fast=fast->next->next;
    }
    return slow;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    ListNode* l1=list1;ListNode* l2=list2;
    ListNode* dup;dup->next=NULL;dup->val=0;
    ListNode* temp;
    if(l1->val<l2->val)
    {
        dup->next=l1;
        l1=l1->next;
       temp=dup->next;
       temp=temp->next;
    }
    else
    {
        dup->next=l2;
        l2=l2->next;
      temp=dup->next;temp=temp->next;
    }
    while(l1->next!=NULL && l2->next!=NULL)
    {
        if(l1->val<l2->val)
    {
        temp->next=l1;temp=temp->next;
        l1=l1->next;
        //ListNode* temp=dup->next;
    }
    else
    {
        temp->next=l2;temp=temp->next;
        l2=l2->next;
    }
    
        while(l1->next)
        {
             temp->next=l1;temp=temp->next;
        l1=l1->next;
        }
    
   while(l2->next)
   {
    temp->next=l2;temp=temp->next;
        l2=l2->next;
   }
   return dup->next;
    }
}

ListNode* removeNthFromEnd(ListNode* head, int n) 
{
    ListNode* temp=new ListNode();
    temp->next=head;
    ListNode* fast=temp;
    ListNode* slow=temp;
    for(int i=0;i<n;i++)
    fast=fast->next;
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return head;
} 
int rev(int num)
{
    int te=0;
    while(num>0)
    {
        te=te*10+num%10;
        num=num/10;
    }
    return te;

}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    int n1=0,n2=0;
    while(l1)
    {
        n1=n1*10+l1->val;
        l1=l1->next;
    }
    n1=rev(n1);
    while(l2)
    {
        n2=n2*10+l2->val;
        l2=l2->next;
    }
    n2=rev(n2);
    int r=n1+n2;cout<<r<<endl;
    r=rev(r);
    ListNode* head=new ListNode();
    
}

ListNode *detectCycle(ListNode *head)
{
    if(!head)return NULL;
    ListNode* s=head;ListNode* f=head;
    
    while(true)
    {
        
        if(!f->next || !f->next->next)return false;
        s=s->next;f=f->next->next;
        if(s==f)break;
    }
    if(s==NULL)return NULL;
    while(true)
    {
        if(head==s)return head;
        head=head->next;s=s->next;  


    }

}

void dfs(vector<vector<int>>& grid,int i,int j,int &ma,int &temp)
{
    if(i<0 || j<0 ||i>=grid.size()||j>=grid[0].size())
    {
        return ;
    }
    temp++;
    ma=max(ma,temp);
    vector<int> x(3),y(3);
    x[0]=-1;x[1]=0;x[2]=1;y[0]=1;y[1]=1;y[2]=1;
    for(int k=0;i<3;i++)
    {
        if(grid[i][j]<grid[i+x[k]][j+y[k]])
        dfs(grid,i+x[k],j+y[k],ma,temp);
    }


}

int maxMoves(vector<vector<int>>& grid) 
{
    int ma=0,temp=0;
    
    //vector<vector<int>>& dp(grid.size(),vector<int>(grid[0].size()));
    for(int i=0;i<grid.size();i++)
    {
        temp=0;
        dfs(grid,0,i,ma,temp);
    }
    return ma;
}
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
int countNodes(TreeNode* root)
{
    if(root==NULL)return 0;
    return 1+countNodes(root->left)+countNodes(root->right);


    
}

bool isMirror(TreeNode* r1 ,TreeNode* r2)
{
    if(r1==NULL && r2 ==NULL)return true;
    if(r1==NULL && r2!=NULL)return false;
    if(r2==NULL && r1!=NULL)return false;
    if(r1->val==r2->val)
    return isMirror(r1->left,r2->right) && isMirror(r2->left,r1->right);
}

bool isSymmetric(TreeNode* root) 
{
    if(root==NULL)return true;
    return isMirror(root->left,root->right);
}

struct BTNode{
	int val;
	BTNode *left, *right;
};

int sumOfAllNodes(BTNode *root)
{
    // TODO:  Fill your code here
    if(root==NULL)return 0;
    return root->val+sumOfAllNodes(root->left)+sumOfAllNodes(root->right);
    
}

int sizeOfTree(BTNode *root)
{
    // TODO:  Fill your code here
    int c=0;
    if(root==NULL)return 0;
    c++;
    return c+sizeOfTree(root->left)+sizeOfTree(root->right);
}

void  helpinorderTraversal(TreeNode* r ,vector<int> &ans)
{
    if(r==NULL)return ;
    helpinorderTraversal(r->left,ans);
    ans.push_back(r->val);
     helpinorderTraversal(r->right,ans);

}
