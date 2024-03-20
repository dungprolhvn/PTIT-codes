#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string n, m;
        cin >> n >> m;
        int l1 = n.length(), l2 = m.length();
        vector<vector<int>> dp(l1+1, vector<int>(l2+1, 0));
        for (int i = 1; i <= l1; i++) {
            for (int j = 1; j <= l2; j++) {
                if (n[i-1] == m[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        cout << dp[l1][l2] << endl;
    }
    return 0;
}