#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cout << "hi";
        vector<int> v(4);
    }

    return 0;
}

int rob(vector<int> &nums)
{
    int rob=0,norob=0;
    for(int i=0;i<nums.size();i++)
    {
        int ifrob=norob+nums[i];
        int ifnotrob=max(rob,norob);
        rob=ifrob;
        norob=ifnotrob;
    }
    return max(rob,norob);
}