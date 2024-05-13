#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;

ll calc(string s) {
    int l = s.length();
    vector<ll> dp(l, 0); // dp[i]: tong cua tat ca xau con co s[i] la chu so cuoi
    dp[0] = s[0] - '0';
    ll total = dp[0];
    for (int i = 1; i < l; i++) {
        int digit = s[i] - '0';
        dp[i] = dp[i-1]*10 + digit*(i+1);
        total += dp[i];
    }
    return total;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        cout << calc(n) << endl;
    }
    return 0;
}