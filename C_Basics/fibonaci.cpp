#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;cin>>n;
    int i=1 ,j=1 , k=0;
    while(n--)
    {
       k=i+j;
       if(k>=100)break;
       cout<<i<<" ";
       i=j;
       j=k; 
    }

    return 0;
}