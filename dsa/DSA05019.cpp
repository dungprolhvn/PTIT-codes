#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int maxSquare(vector<vector<int>>& mat, int n, int m) {
    int result = 0;
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || j == 0) dp[i][j] = mat[i][j];
            else if (mat[i][j]) {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
            }
            result = max(result, dp[i][j]);
        }
    }
    return result;
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
        cout << maxSquare(mat, n, m) << endl;
    }
    return 0;
}