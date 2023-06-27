#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int climbStairs(int n)
{
    vector<int> v(45);
    v[0]=1;v[1]=1;v[2]=2;
    for(int i=3;i<45;i++)
    {
        v[i]+=v[i-1]+v[i-2];
    }
    return v[n];

}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}