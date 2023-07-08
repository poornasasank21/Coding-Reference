#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;cin>>n;
    int l=1,r=n*(n+1);
    for(int i=n;i>0;i--)
    {
        int count=i;
        int gap=n-i;
        for(int j=0;j<gap;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<i;j++)
        {
            if(j==0)
            {
                cout<<l<<"*";l++;
            }
            else {
            cout<<"*"<<l;l++;}
        }
        for(int j=i;j>0;j++)
        {
            cout<<"*"<<r-i+1;
            r--;
        }
        cout<<endl;
    }

    return 0;
}