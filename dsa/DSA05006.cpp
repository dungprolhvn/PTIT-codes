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
        vector<int> dp(v);
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (v[j] < v[i]) {
                    dp[i] = max(dp[i], dp[j] + v[i]);
                }
            }
        }
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}