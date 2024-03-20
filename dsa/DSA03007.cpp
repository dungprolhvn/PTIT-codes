#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (a[i]*b[i]);
        }
        cout << sum << endl;
    }
}