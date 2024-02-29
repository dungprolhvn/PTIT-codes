#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

const long mod = 123456789;


ll kount(ll n) {
    if (n == 1) return 1;
    ll x = kount(n/2);
    if (n&1) return ((x%mod * x%mod)*4 % mod) % mod;
    return ((x%mod * x%mod)*2 % mod) % mod;
}

int main()
{
    int t; ll n; cin >> t;
    while (t--)
    {
        cin >> n;
        cout << kount(n) << endl;
    }
    return 0;
}