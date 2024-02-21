#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


bool check(vector<int>& v, int n, int sum) {
    if (sum&1) return false;
    sum /= 2;
    vector<vector<bool>> dp(n+1, vector<bool>(sum+1, 0)); // dp[i][j]=true if there is a subset of first i element sums equals j
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (j >= v[i - 1]) {
                dp[i][j] = dp[i-1][j - v[i-1]] || dp[i-1][j]; // include jth element
            }
            else {
                dp[i][j] = dp[i-1][j]; // exclue jth element
            }
        }
    }
    return dp[n][sum];
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int sum = 0;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum+=v[i];;
        }
        if (check(v, n, sum)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}