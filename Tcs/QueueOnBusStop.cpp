#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;



int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, cap;cin>>n>>cap;
    vector<int> v(n);for(auto &a:v)cin>>a;
    int bus=0;
    int i=0;
    while(i<n)
    {
        //kk
        if(v[i]==cap)
        {
            i++;
            bus++;
        }
        else if(v[i]<cap)
        {
            int gap=cap-v[i];
            while(gap>=v[i+1])
            {
                gap-=v[i+1];
                i++;
            }
            bus++;
            i++;
        }
        
    }


    cout<<bus;

    return 0;
}