#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    unordered_map<char, int> mp;
    for (auto a : s)
        if (a != ' ')
            mp[a]++;
    for (auto a : s)
    {
        if (mp[a] != -1 && a != ' ')
        {
            cout << a << mp[a];
            mp[a] = -1;
        }
    }
    return 0;
}