#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n;cin>>n;
        vector<int> v(n*2);
        for(auto &a:v)cin>>a;
        int c=1,cur=1;
        int i=1;
        while(i<n-1)
        {
            if(v[i]<v[i+1])
            {
                cur++;c=max(c,cur);
            }
            else cur=1;
            i+=2;
        }
        cout<<c<<endl;

    }

    return 0;
}