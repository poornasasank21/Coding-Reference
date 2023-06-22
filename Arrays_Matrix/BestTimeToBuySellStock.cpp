#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int maxProfit(vector<int>& prices)
{
    int curmin=INT_MAX;
    int maxP=0;
    for(int i=0;i<prices.size();i++)
    {
        curmin=min(curmin,prices[i]);
        maxP=max(maxP,(prices[i]-curmin));
    }
    return maxP;
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}