#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int ans()
{
    int n;cin>>n;
    //cout<<n<<endl;
    int f=1;
    for(int i=1;i<n+1;i++)f*=i;
    //cout<<f<<"\n";
    while(f>0)
    {
        if(f%10==0)
        f=f/10;
        else
        return f%10;
    }return 0;
}
int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cout<<ans();

    return 0;
}