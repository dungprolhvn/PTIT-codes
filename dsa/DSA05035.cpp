#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

long long power(long long a, long long b, long long mod) {
    if (b == 0) return 1;
    if (b == 1) return a;
    long long tmp = power(a, b/2, mod);
    tmp = (tmp*tmp) % mod;
    if (b&1) tmp = (tmp*a) % mod;
    return tmp;
}

int main()
{
    const long MOD = 1e9 + 7;
    long long dp[101];
    dp[1] = 10;
    for (long long i = 2; i <= 100; i++) {
        // dp[i] = dp[i - 1] * (i + 9) / i
        dp[i] = (dp[i - 1] * (i + 9) % MOD * power(i, MOD-2, MOD)) % MOD;
    }
    long long t; cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}