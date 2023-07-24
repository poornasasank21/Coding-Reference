#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int removeDuplicates(vector<int>& nums)
{
    int i=1,j=1;
    while(j<nums.size())
    {
        if(nums[i]!=nums[j])
        {
            nums[i++]=nums[j];
        }
        j++;
    }
    return i+1;
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}