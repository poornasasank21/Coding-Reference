#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) 
{
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end());
    ans.push_back({intervals[0][0],intervals[0][1]});
    int i=0;
    for(int k=1;k<intervals.size();k++)
    {
        if(ans[i][1]>=intervals[k][0])
        {
            ans[i][1]=max(intervals[k][1],ans[i][1]);
        }
        else
        {
            ans.push_back(intervals[k]);
            i++;
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