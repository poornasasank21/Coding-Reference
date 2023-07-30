#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int lar(vector<int> &v,int &n,int &k,int i)
{
    if(i>=n)return k;
    if(k<v[i])k=v[i];
    k=lar(v,n,k,i+1);
    return k;
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n,k=0;cin>>n;
    vector<int> v(n);
    for(auto &a:v)cin>>a;
    int t=lar(v,n,k,0);
    cout<<k;

    return 0;
}