#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool is2(ll n)
{
    
    while(n>0)
    {
        if(n%10==2)return true;
        n=n/10;
    }
    return false;
}
bool is10(ll n)
{
    while(n>0)
    {
        if(!n%10)return true;
        n=n/10;
    }
    return false;
}
bool is3(ll n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n=n/10;
    }
    return s%3==0;
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n;cin>>n;
    while(n--)
    {
        ll i;cin>>i;
        if(is10(i)&&is2(i)&&is3(i))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}