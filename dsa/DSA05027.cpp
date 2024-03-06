#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    vector<vector<int>> dp(1001, vector<int>(1001, 0));
    int t, n, v; 
    cin >> t;
    while (t--)
    {
        cin >> n >> v;
        vector<int> a(n+1), c(n+1);;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> c[i];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= v; j++) {
                dp[i][j] = dp[i - 1][j];
                if ((a[i] <= j) && (dp[i - 1][j - a[i]] + c[i] > dp[i - 1][j])) 
                    dp[i][j] = dp[i - 1][j - a[i]] + c[i];
            }
        }
        cout << dp[n][v] << endl;
    }
    return 0;
}