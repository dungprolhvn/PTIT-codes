#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int minDeletion(string s) {
    int l = s.length();
    vector<vector<int>> dp(l, vector<int>(l, 0));
    for (int i = l - 2; i >= 0; i--) {
        for (int j = i + 1; j < l; j++) {
            if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1];
            else
                dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
        }
    }
    return dp[0][l - 1];
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << minDeletion(s) << endl;
    }
    return 0;
}