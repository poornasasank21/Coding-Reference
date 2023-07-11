#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int subarraysWithSumK(vector < int > a, int b) {
    
    int x=0,ans=0;
    map<int,int> mp;
    mp[0]=1;
    for(int i=0;i<a.size();i++)
    {   x=x^a[i];
        int k=x^b;
        if(mp.find(k)!=mp.end())
        {
            ans+=mp[k];
        }
        mp[x]++;
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