#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    int ans = 0;
    while (k--)
    {
        int s, e, val;
        cin >> s >> e >> val;
        while (s <= e)
        {
            v[s] += val;
            ans = max(v[s], ans);
            s++;
        }
    }
    cout << ans << endl;

    return 0;
}