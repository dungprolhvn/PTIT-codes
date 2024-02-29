#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

const long mod = 1e9 + 7;

ll poww(ll a, ll b) {
    if (b == 0) return 1;
    ll x = poww(a, b/2);
    if (b&1) return x % mod * x % mod * a % mod;
    return x % mod * x % mod;
}


int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << poww(n, k) << endl;
    }
    return 0;
}