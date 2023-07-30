#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int a,b;cin>>a>>b;
    //cout<<"1.Addition \n  2.Subraction \n3.Multiplication \n4.division";
    char c;cin>>c;
    switch (c)
    {
        case 'a'||'A':
        cout<<c;
        break;
        default :
        cout<<"default";
        break;
    }

    return 0;
}