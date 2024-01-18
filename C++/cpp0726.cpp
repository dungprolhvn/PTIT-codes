#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

ll calc(ll a, ll b, ll c)
{
    a = a % c, b = b % c;
    ll rs = 0;
    while (b)
    {
        if (b&1) rs = (rs + a) % c;
        a = (a*2) % c;
        b >>= 1; // b /= 2 but faster
    }
    return rs;
}


int main()
{
    int t; cin >> t;
    ll a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << calc(a, b, c) << endl;
    }
    return 0;
}