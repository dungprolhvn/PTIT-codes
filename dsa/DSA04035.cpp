#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;
const long mod = 1e9+7;

ll poww(ll a, ll b) {
    if (!b) return 1;
    ll x = poww(a, b/2);
    if (b&1) return x * x % mod * a % mod;
    return x * x % mod;
}


int main()
{
    ll a, b;
    while (cin >> a >> b) {
        if (!a && !b) break;
        cout << poww(a, b) << endl;
    }   
    return 0;
}