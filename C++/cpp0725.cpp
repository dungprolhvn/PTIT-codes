#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

const ll P = 1e9 + 7;

ll power(ll a, ll b)
{
    // Calculate a^b % P
    ll rs = 1;
    while (b)
    {
        if (b & 1) rs = (rs * a) % P;
        a = (a * a) % P;
        b /= 2;
    }
    return rs;
}

ll comb(int n, int r)
{
    if (!n)
    {
        return 0;
    }
    ll rs = 1;
    for (int i = r + 1; i <= n; i++)
    {
        rs = (rs * (i % P)) % P;
    }
    for (int i = 1; i <= n - r; i++)
    {
        rs = (rs * power(i, P-2)) % P;
    }
    return rs;  
}

int main()
{
    int t; cin >> t;
    int n, r;
    while (t--)
    {
        cin >> n >> r;
        cout << comb(n, r) << endl;
    }
    return 0;
}