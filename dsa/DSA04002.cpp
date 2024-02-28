#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;


const ll mod = 1e9+7;


ll poww(ll a, ll b) {
    if (b == 0) return 1;
    ll x = poww(a, b/2);
    if (b&1) return x % mod * x % mod * a % mod;
    return x % mod * x % mod;
}


int main()  
{
    int t; ll n; cin >> t;
    while (t--)
    {
        cin >> n;
        string sn = to_string(n);
        reverse(sn.begin(), sn.end());
        ll rn = stoll(sn);
        cout << poww(n, rn) << endl;
    }
    return 0;
}