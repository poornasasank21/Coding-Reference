#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

double myPow(double x, int n)
{
    long long nn=n;
    double ans=1;
    if(nn<0)nn*=(-1);
    while(nn)
    {
        if(nn%2)
        {
            ans*=x;
            nn--;
        }
        else 
        {
            x*=x;
            nn/=2;
        }
    }
    if(n<0)ans=(double)(1/ans);
    return ans;
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}