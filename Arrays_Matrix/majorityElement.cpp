#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int majorityElement(vector<int>& nums) 
{
     map<int,int> mp;
    for(auto a:nums)mp[a]++;
    int i=mp.size(),k=1;
    int ele=0,count=0;
    for(auto a:mp)
    {
       if(a.second>count)
       {
        count=a.second;ele=a.first;
       }
    }
    return ele;
}


int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}