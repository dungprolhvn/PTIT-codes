#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;
const int MAX = 101;
const long MOD = 1e9 + 7;

ll power(int a, int b, int mod) {
    if (b == 0) return 1;
    if (b == 1) return a;
    ll tmp = power(a, b/2, mod);
    tmp = tmp * tmp % MOD;
    if (b&1) tmp = tmp * a % MOD;
    return tmp;
}

int main()
{
    ll dp[MAX] = {0};
    dp[1] = 10;
    for (int i = 2; i < MAX; i++) {
        dp[i] = (dp[i - 1] * (i + 9)) % MOD;
        dp[i] = dp[i] * power(i, MOD - 2, MOD) % MOD;
    }
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}