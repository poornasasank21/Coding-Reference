#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int findDuplicate(vector<int>& nums)
{
    // int n=nums.size();
    // int ac=n*(n+1)/2;
    // int gs=0;
    // for(auto a:nums)gs+=a;
    // return ac-gs;
    // map<int,int> mp;
    // for(auto a:nums)mp[a]++;
    // for(auto a:mp)
    // {
    //     if(a.second>1)return a.first;
    // }
    //the above code is wrong approach
    //below code is like linkedlist cycle detection
    int s=nums[0],f=nums[0];
    do
    {
        s=nums[s];
        f=nums[nums[f]];
    } while (s!=f);
    f=nums[0];
    while(s!=f)
    {
        s=nums[s];
        f=nums[f];

    }
    return f;
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}