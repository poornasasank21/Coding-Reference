#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

struct meeting
{
    int start,end,num;
};
bool static cmp(meeting a,meeting b)
{
    if(a.end<b.end)return true;
    if(a.end>b.end)return false;
    return a.num<b.num;
}
int maxMeetings(int start[], int end[], int n)
{
    vector<meeting> v;
    for(int i=0;i<n;i++)
    {
        meeting a;
        a.end=end[i];a.start=start[i];a.num=i+1;  
        v.push_back(a);
    }
    sort(v.begin(),v.end(),cmp);
    int endtime=v[0].end;
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(endtime<v[i].start)
        {
            endtime=v[i].end;
            ans++;
        }
    }
    return ans+1;


}

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {

    }

    return 0;
}