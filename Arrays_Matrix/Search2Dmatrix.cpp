#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool sv(vector<int> v,int target)
{
    for(auto a:v)
    if(a==target)return true;
    return false;
}
bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int n=matrix.size(),m=matrix[0].size();
    for(auto a:matrix)
    {
        if(target>=a[0] && target<=a[m-1])
        {
            if(sv(a,target))return true;
        }
    }
    return false;
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}