#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;cin>>n;
    int sum=0;
    int temp=n;
    while (temp>0)  
    {
        sum+=temp%10;
        temp/=10;
    }
    cout<<sum<<endl;
    temp=n;
    int ans=0;
    while(temp>0){
        ans*=10;
        ans+=temp%10;
        temp/=10;
    }
    cout<<ans<<endl;


    

    return 0;
}