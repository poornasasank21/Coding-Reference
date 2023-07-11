#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int findMinimumCoins(int amount) 
{
    // Write your code herevec
    vector<int> v={1,2,5,10,20,50,100,500,1000};
    int ans=0,i=v.size()-1;
    while(amount>0)
    {
        if(amount>=v[i])
        {
            ans++;
            amount-=v[i];
        }
        else
        {
            i--;
        }
    }
    return ans;
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}