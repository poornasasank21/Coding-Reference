#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<char> v(26,0);
    string s;
    getline(cin,s);
    for(auto a:s)
    {
        if(a>='a' || a<='z')
        v[a-'a']++;
        else if(a>='A'||a<='Z')
        v[a-'A']++;
    }
    for(int i=0;i<26;i++)
    {
        if(v[i]==0)
        {
            cout<<i<<" ";
        }
    }



    return 0;
}