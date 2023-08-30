#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = n; i <= m; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            ans += i;
    }

    cout << ans;

    return 0;
}