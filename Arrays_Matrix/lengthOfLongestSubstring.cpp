#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int lengthOfLongestSubstring(string s)
{
    map<char,int> mp;
    int i=0,l=0,r=0;
    while(r<s.size())
    {
        if(mp.find(s[r])!=mp.end())
        {
            l=max(l,mp[s[r]]+1);
        }
        mp[s[r]]=r;
        i=max(i,r-l+1);
        r++;
        
    }
    return i;
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}