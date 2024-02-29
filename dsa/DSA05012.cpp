#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;
const ll mod = 1e9+7;


ll poww(ll a, ll b) {
    if (!b) return 1;
    ll x = poww(a, b/2);
    if (b&1) return x*x % mod * a%mod;
    return x*x % mod;
}


ll comb(int n, int k) {
    // ckn = n! / k! (n-k)!
    ll fact[n+1];
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i <= n; i++) fact[i] = fact[i-1]*i % mod;
    return fact[n]*poww(fact[k]*fact[n-k]%mod, mod - 2) % mod;
}


int main()
{
    int t, n ,k; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << comb(n, k) << endl;
    }
    return 0;
}