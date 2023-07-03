#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int maxLen(vector<int>&A, int n)
{
    int ans=0;
    // int k=0,sum=A[0];
    // int l=0,r=0;
    // while(r<n)
    // {
    //     while (l<=r && sum>k)
    //     {
    //         sum-=A[l];
    //         l++;
    //     }
    //     if(sum==k)ans=max(ans,r-l+1);
        
    //     r++;
    //     if(r<n)
    //     {
    //         sum+=A[r];
    //     }
    // }
    int k=0;
    map<int,int> mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(sum==k)
        {
            ans=max(ans,i+1);
        }
        int rem=sum-k;
        if(mp.find(rem)!=mp.end())
        {
            ans=max(ans,i-mp[rem]);
        }
        if(mp.find(sum)==mp.end())
        mp[sum]=i;
    }


    return ans;
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}