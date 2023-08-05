#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
void MergeSort(vector<int> a, vector<int> b)
{
    int n = a.size(), m = b.size();
    vector<int> v;
    int i = 0, j = 0, k = 0;
    int temp;
    if (a[i] < b[j])
    {
        temp = a[i++];
        cout << temp << " ";
    }
    else
    {
        temp = b[j++];
        cout << temp << " ";
    }
    while (i < n && j < m)
    {
        while (temp == a[i] && i < n)
        {
            i++;
        }
        while (temp == b[j] && j < m)
            j++;
        if (a[i] == b[j])
        {
            temp = a[i];
            cout << temp << " ";
            i++;
            j++;
        }
        else if (a[i] != b[j])
        {
            int l = min(a[i], b[j]);
            if (l == a[i])
            {
                i++;
                temp = l;
                cout << temp << " ";
            }
            else
            {
                j++;
                temp = l;
                cout << temp << " ";
            }
        }
        else if (temp == a[i] && temp != b[j])
        {
            temp = b[j++];
            i++;
            cout << temp << " ";
        }
        else if (temp != a[i] && temp == b[j])
        {
            temp = a[i++];
            j++;
            cout << temp << " ";
        }
    }

    while (i < n)
    {
        if (temp == a[i])
            i++;
        else
        {
            temp = a[i++];
            cout << temp << " ";
        }
    }
    while (j < m)
    {
        if (temp == b[j])
            j++;
        else
        {
            temp = b[j++];
            cout << temp << " ";
        }
    }
    // for (auto a : v)
    //     cout << a << " ";
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> a = {1, 2, 4, 4, 5, 4};
    vector<int> b = {1, 2,  5,7};
    MergeSort(a, b);

    return 0;
}