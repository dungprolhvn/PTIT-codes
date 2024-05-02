#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int solve(string str1, string str2) {
    int l1 = str1.length(), l2 = str2.length();
    int dp[l1+1][l2+1];
    /*
        dp[i][j]: so buoc insert, delete, replace str1 toi thieu
        de str1[0..i] == str2[0..j]
     */
    dp[0][0] = 0;
    for (int i = 1; i <= l1; i++) dp[i][0] = i;
    for (int i = 1; i <= l2; i++) dp[0][i] = i;

    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else {
                // min insert, delete, replace
                dp[i][j] = min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]}) + 1;
            }
        }
    }
    return dp[l1][l2];
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << solve(s1, s2) << endl;
    }
    return 0;
}