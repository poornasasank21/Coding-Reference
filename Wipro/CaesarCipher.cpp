#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
char letter(char c)
{
    
}
string Encryption(string s, int n)
{
    int i = 0;

    while (i < n)
    {

    }
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cout << " Enter the text :\n";
    string s;
    getline(cin, s);
    int n;
    cout << "Enter Key :\n";
    cin >> n;
    if (n < 0)
        cout << "INVALID OUTPUT";
    else if (n == 0)
    {
        cout << "The encrypted text is : " << s;
    }
    else
        cout << Encryption(s, n);

    return 0;
}