#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void rotate(vector<vector<int>>& matrix) 
{
    int n=matrix.size(),m=matrix[0].size();
    //transpose
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {   
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //swap coloums
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m/2;j++)
        {
            swap(matrix[i][j],matrix[i][m-j-1]);
        }
    }
}

void merge(vector<int>& arr, int m, vector<int>& arr2, int n)
{
    int i=m-1,j=0;
    // while(i>=0 && j<n)
    // {
    //     if(arr[i]>arr2[j])
    //     {
    //         swap(arr[i],arr2[j]);
    //         i--,j++;
    //     }
    //     else 
    //     {
    //         break;
    //     }
    // }
    // partial_sort(arr.begin(),arr.begin()+m,arr.end());
    // sort(arr2.begin(),arr2.end());
    // for(int i=m,j=0;i<n+m;i++)
    // {
    //     arr[i]=arr2[j++];
    // }
    while(i<n+m)
    {
        arr[i++]=arr2[j++];
    }
    sort(arr.begin(),arr.end());
}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}