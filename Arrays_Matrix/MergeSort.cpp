#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void merge(vector<int> &v,int l,int mid, int r)
{
    vector<int> temp;
    int p1=l,p2=mid+1;
    while(p1<=mid && p2<=r)
    {
        if(v[p1]<=v[p2])
        temp.push_back(v[p1++]);
        else temp.push_back(v[p2++]);
    }
    while(p1<=mid)
    temp.push_back(v[p1++]);
    while(p2<=r)
    temp.push_back(v[p2++]);
    for(int i=l;i<=r;i++)
    v[i]=temp[i-l];
}

void ms(vector<int> &v,int l,int r)
{
    if(l>=r)return ;
    int mid=(l+r)/2;
    ms(v,l,mid);
    ms(v,mid+1,r);
    merge(v,l,mid,r);
}
void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    ms(arr,0,arr.size()-1);
    
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}