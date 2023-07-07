#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int longestConsecutive(vector<int>& nums)
{
    // if(nums.size()<1)return 0;
    // int ans=INT_MIN;
    // sort(nums.begin(),nums.end());
    // int prev=nums[0];
    // int cur=1;
    // for(int i=0;i<nums.size();i++)
    // {
    //     if(nums[i]==prev+1)
    //     cur++;
    //     else if(nums[i]!=prev) cur=1;
    //     prev=nums[i];
    //     ans=max(ans,cur);

    // }

    // return ans;
    //o(N)- approach
    set<int> s;
    for(auto a:nums)s.insert(a);
     int ans=1,c=1;
    for(auto a:nums)
    {
        if(s.find(a-1)==s.end())
        {
            c=1;
            int p=a-1;
            while(s.find(p+1)!=s.end())
            {
                c++;
                p=p+1;
            }
            ans=max(ans,c);
        }
        
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