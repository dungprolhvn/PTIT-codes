#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        vector<int> dp(n+1, 0);
        dp[1] = v[0];
        for (int i = 2; i <= n; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + v[i-1]);
        }
        cout << dp[n] << endl;
    }
    return 0;
}