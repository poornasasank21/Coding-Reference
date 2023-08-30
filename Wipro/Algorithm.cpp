#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
/*
read
size and no of rotations of array
read choice left rotation or right rotation
*/
void leftShift(vector<int> v, int n, int r)
{
    while (r--)
    {
        int t = v[0];
        for (int i = 1; i < n; i++)
        {
            v[i - 1] = v[i];
        }
        v[n - 1] = t;
    }
    for (auto a : v)
        cout << a << " ";
}

void rightShift(vector<int> v, int n, int r)
{
    while (r--)
    {
        int t = v[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            v[i] = v[i - 1];
        }
        v[0] = t;
    }
    for (auto a : v)
        cout << a << " ";
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &a : v)
        cin >> a;
    cout << "1.Left Shift\n 2.Right Shift";
    int k;
    cin >> k;

    cout << "Enter No of Shifts :\n";
    int r;
    cin >> r;
    r = r % n;
    if (k == 2)
        rightShift(v, n, r);
    else
        leftShift(v, n, r);

    return 0;
}