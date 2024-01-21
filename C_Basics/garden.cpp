#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
// int check(int n ,vector <int> &v,int days)
// {

// }
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;cin>>n;
    vector<int> v(n);
    int maxh=0,pres_sum=0;
    for(auto &a:v)
    {
        cin>>a;
        maxh=max(maxh,a);
        pres_sum+=a;
    }
    int reqh=maxh*n;
    //cout<<check(n,v);
    int d=1;
    while (pres_sum<reqh)
    {
        for(auto &a:v)
        {
            if(a!=maxh)
            {
                if(maxh-a>=2)
                {
                    if(d%2==0)
                    a+=2;
                    else 
                    a+=1;
                    d++;
                }
                if (maxh-a==1)
                {
                    
                }
                
            }
        }
    }
    



    return 0;
}