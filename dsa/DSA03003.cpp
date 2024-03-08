#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
const long mod = 1e9+7;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        ll sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            sum = (sum + v[i]*i) % mod;
        }
        cout << sum << endl;
    }
    return 0;
}