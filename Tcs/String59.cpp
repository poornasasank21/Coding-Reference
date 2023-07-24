#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string s;cin>>s;
    vector<char> v;
    for(auto a:s)
    {
        if((a>='a')&&(a<='z'))
        {
            v.push_back(toupper(a));
        }
        else if((a>='A')&&(a<='Z'))
        v.push_back(a);
    }
    int sum=0;
    for(auto a:v)
    {
        sum+=((int)(a-'A'))+1;
    }
    // cout<<sum;
    int ans=0;
    while(sum>0)
    {
        ans+=sum%10;
        sum=sum/10;
    }
    cout<<ans;

    return 0;
}