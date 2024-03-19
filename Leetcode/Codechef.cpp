#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2) 
{
    int i=0,j=0;
    while(i<nums1.size() && j<nums2.size())
    {
        if(nums1[i]==nums2[j])return nums2[j];
        else if(nums1[i]<nums2[j])i++;
        else j++;
    }
    return -1;
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

       int n;cin>>n;
       int k=0;
       while(n>0)
       {
        k+=n%2;
        n>>=1;
       }
       if(k%2==0)cout<<"EVEN"<<endl;
       else cout<<"ODD"<<endl;
        
    }

    return 0;
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

        string s;cin>>s;
	    int ans=0;

    }

    return 0;
}