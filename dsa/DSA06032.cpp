#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;


ll countSmallerThanK(vector<ll> v, int n, int k) {
    ll c = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n + 1; i++) {
        for (int j = i + 1; j < n; j++) {
            ll tmp = v[i] + v[j];
            ll cc = lower_bound(v.begin()+j+1, v.end(), k-tmp) - (v.begin()+j+1);
            c += cc;
        }
    }
    return c;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << countSmallerThanK(v, n, k) << endl;
    }
    return 0;
}