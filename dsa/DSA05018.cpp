#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int rs = 1;
        string s; cin >> s;
        int l = s.length();
        vector<vector<bool>> dp(l, vector<bool>(l, 0));
        for (int i = 0; i < l; i++) dp[i][i] = 1;
        for (int i = l-1; i >= 0; i--) {
            for (int j = i; j <= l-1; j++) {
                if (s[i] == s[j]) {
                    if (j-i==1) dp[i][j] = 1;
                    else dp[i][j] = dp[i+1][j-1];
                }
                if (dp[i][j]) rs = max(rs, j-i+1);
            }
        }
        cout << rs << endl;
    }
    return 0;
}