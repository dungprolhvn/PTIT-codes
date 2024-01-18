#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

ll solve(int x, int y, ll p)
{
    if (x % p == 0)
    {
        return 0;
    }
    ll m = x % p; // x^1 % p, x^2 % p == (x%p * x%p) % p, x^3 %p = (x^2%p * x%p) %p
    ll rs = m;
    for (int i = 1; i < y; i++)
    {
        rs = (rs * m) % p;
    }
    return rs;
}

int main()
{
    int t; cin >> t;
    int x, y; ll p;
    while (t--)
    {
        cin >> x >> y >> p;
        cout << solve(x, y, p) << endl;
    }
    return 0;
}