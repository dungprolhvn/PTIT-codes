#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int longestSubstringNumber(string s) {
    int rs = 1;
    int l = s.length();
    vector<vector<bool>> dp(l, vector<bool>(l, 0));
    // dp[i][j] = true if s[i..j] is palindrome

    for (int i = 0; i < l; i++) dp[i][i] = 1;
    for (int i = 0; i < l - 1; i++) {
        if (s[i] == s[i + 1] && s[i] != '0') dp[i][i + 1] = 1;
    }

    for (int gap = 2; gap < l; gap++) {
        for (int i = 0, j = i + gap; j < l; i++, j++) {
            if (s[i] == s[j] && s[i] != '0' && dp[i + 1][j - 1]) {
                dp[i][j] = 1;
                rs = max(rs, gap + 1);
            }
            else dp[i][j] = 0;
        }
    }

    return rs;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << longestSubstringNumber(s) << endl;
    }
    return 0;
}