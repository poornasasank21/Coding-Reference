#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;cin>>n;vector<int>v(n);
    int sum=0,ans=0;
    for(auto &a:v){cin>>a; sum+=a;}
    int ma=v[v.size()-1],index=v.size()-1;
    while(sum>0)
    {
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]>ma)
            {
                index=i;ma=v[i];
            }
        }
        for(int i=index;i<v.size();i++)
        {
            if(v[i]>0)
            {
                sum-=v[i];
                v[i]=0;
            }
        }
        ans++;
    }
    cout<<ans;




    return 0;
}