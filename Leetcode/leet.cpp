#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    while (l1 != NULL)
    {
        l1->val += l2->val;
        l1 = l1->next;
        l2 = l2->next;
    }
    return l1;
}

vector<int> findErrorNums(vector<int> &nums)
{
    int n = nums.size();
    map<int, int> mp;
    int dup = -1, real = -1, psum = 0;
    for (auto a : nums)
    {
        psum += a;
        mp[a]++;
        if (mp[a] == 2)
        {
            dup = a;
        }
    }
    int asum = n * (n + 1) / 2;
    return {dup, abs(psum - asum - dup)};
}

int countKeyChanges(string s)
{
    int n = s.length();
    if (n == 1)
        return 0;
    int i = 0, c = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i] || s[i - 1] + 32 == s[i] || s[i - 1] - 32 == s[i])
        {
        }
        else
            c++;
    }

    return c;
}
int hire(int n, vector<int> v)
{
}

int findMax(vector<vector<int>> &matrix, int row, int col)
{
    int ans = -1;
    for (int i = 0; i < matrix.size(); i++)
        ans = max(ans, matrix[i][col]);
    return ans;
}

int missingNumber(vector<int>& nums)
{
    int n=nums.size(),sum=0;
    vector<int> v(n+1,-1);
    for (int i = 0; i < n; i++)
    {
        v[nums[i]]++;
    }
    int ans;
    for(int i=0;i<n+1;i++)
    if(v[i]==-1)
    return i;
    return 0;
    
    
}

vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = findMax(matrix, i, j);
            }
        }
    }
    return matrix;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
    }

    return 0;
}