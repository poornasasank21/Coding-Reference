#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    for(auto &a:v)
    {cin>>a;
    mp[a]++;
    }
    for(auto a:v)
    if(mp[a]==1)cout<<a<<" ";
    
    return 0;
}