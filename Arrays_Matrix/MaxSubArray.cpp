#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int maxSubArray(vector<int>& nums) {
        int sum = 0, ans = INT_MIN;
        for(auto &i: nums){
            sum += i;
            ans = max(ans,sum);
            if(sum<0)sum = 0;
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