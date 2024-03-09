#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t, n, s; cin >> t;
    while (t--)
    {
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        vector<vector<bool>> dp(n+1, vector<bool>(s+1, 0));
        dp[0][0] = 1; // base case
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= s; j++) {
                if (dp[i-1][j] || (v[i-1] <= j && dp[i-1][j-v[i-1]])) dp[i][j] = 1;
            }
        }
        if (dp[n][s]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}