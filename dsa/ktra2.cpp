#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;

bool eq(int a, int b, int c, int d) {
    return abs((double) a/b - (double) c/d) < 0.00000001;
}

int solve(vector<int> a, vector<int> b, int n, int m) {
    int dp[n][m];
    // dp[i][j] is the maximum length of consecutive that ends at a[i] and b[j]
    dp[0][0] = 1;
    for (int i = 1; i < n; i++) dp[i][0] = 1;
    for (int i = 1; i < m; i++) dp[0][i] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (eq(a[i], b[j], a[i-1], b[j-1])) {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else dp[i][j] = 1;
        }
    }
    int rs = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rs = max(rs, dp[i][j]);
        }
    }
    return rs;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    cout << solve(a, b, n, m) << endl;
    return 0;
}