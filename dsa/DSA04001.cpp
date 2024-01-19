#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

const long d = 1e9 + 7;

ll nmuk(ll n, ll k) {
    ll rs = 1;
    while (k > 0) {
        if (k&1) {
            rs = (rs*n) % d;
        }
        n = (n*n) % d;
        k >>= 1;
    }
    return rs;
}


int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << nmuk(n, k) << endl;
    }
    return 0;
}