#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    const int MAX_N = 100, MAX_K = 50000;
    const long MOD = 1e9 + 7;
    vector<vector<int>> dp(MAX_N+5, vector<int>(MAX_K+5, 0));
    // dp[i][j]: so luong so co i chu so, tong bang j
    for (int j = 1; j <= 9; jS++) dp[1][j] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        for (short digit = 0; digit <= 9; digit++) {
            for (int j = digit; j <= MAX_K; j++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - digit]) % MOD;
            }
        }
    }
    int t, n, k; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
    return 0;
}