#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n,m;cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m,0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>v[i][j];//<<" ";
        }
        // cout<<endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i<j)swap(v[i][j],v[j][i]);
        }
        // cout<<endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}