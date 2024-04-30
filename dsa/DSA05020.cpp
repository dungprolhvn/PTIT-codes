#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int minCost(vector<vector<int>> table, int h, int w) {
    vector<vector<int>> dp(h, vector<int>(w));
    // base
    dp[0][0] = table[0][0];
    for (int i = 1; i < w; i++) dp[0][i] = dp[0][i-1] + table[0][i];
    for (int i = 1; i < h; i++) dp[i][0] = dp[i-1][0] + table[i][0];
    //
    for (int i = 1; i < h; i++) {
        for (int j = 1; j < w; j++) {
            dp[i][j] = min({dp[i-1][j-1] + table[i][j], dp[i-1][j] + table[i][j], dp[i][j-1] + table[i][j]});
        }
    }
    return dp[h-1][w-1];
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        cout << minCost(mat, n, m) << endl;
    }
    return 0;
}