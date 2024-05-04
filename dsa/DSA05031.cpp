#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool check(int i) {
    int n = sqrt(i);
    return n*n == i;
}

int main()
{
    int dp[10001];
    for (int i = 0; i <= 10000; i++) {
        if (check(i)) dp[i] = 1;
        else {
            dp[i] = i;
            for (int j = 2; j*j <= i; j++) {
                dp[i] = min(dp[i], dp[i - j*j] + 1);
            }
        }
    }
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}