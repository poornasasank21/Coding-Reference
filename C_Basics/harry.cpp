#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    vector<string> v(n);
    for(auto &a:v)
    {
        cin>>a;
    }
    string ans;cin>>ans;
    vector<bool> ch(ans.size(),true);
    for(int i=0;i<v.size();i++)
    {
        if(ans.find(a))
        {
            int pos=ans.find(v[i]);
            for(int k=pos;k<i+a.size();k++)
            {
                ans[k]='*';
                ch[k]=false;
            }
        }
    }
    bool che=false;
    for(auto a:ch)
    {
        if(a)
        {
            che=!che;
            cout<<"Voldemort";break;
        }
    }
    if(!che)
    cout<<"Harry";
    cout<<endl;
    for(auto a:ch)cout<<a<<" ";


    return 0;
}
