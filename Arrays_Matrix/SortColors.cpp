#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

 void sortColors(vector<int>& nums)
{
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[mid++],nums[low++]);
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else if(nums[mid]==2)
        swap(nums[mid],nums[high--]);
    }
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}