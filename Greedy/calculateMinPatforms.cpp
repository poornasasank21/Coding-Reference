#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int calculateMinPatforms(int at[], int dt[], int n) 
{
    sort(at,at+n);
    sort(dt,dt+n);
    int platforms=1,ans=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(at[i]<=dt[j])
        {
            i++;
            platforms++;
        }
        else 
        {
            platforms--;
            j++;
        }
        ans=max(ans,platforms);
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