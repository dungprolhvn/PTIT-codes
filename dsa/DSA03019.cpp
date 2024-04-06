#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;

void solve(ll t, ll m) {
    if (!t || !m) return;
    if (m % t == 0) {
        cout << "1/" << m/t;
        return;
    }
    ll n = (ll) ceil((double) m/t);
    cout << "1/" << n << " + ";
    solve(t*n-m, m*n);
}

int main()
{
    ll t; cin >> t;
    while (t--)
    {
        ll ts, ms;
        cin >> ts >> ms;
        solve(ts, ms);
        cout << endl;
    }
    return 0;
}