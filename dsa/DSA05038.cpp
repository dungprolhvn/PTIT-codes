#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define sec second
typedef unsigned long long ll;

using namespace std;

bool compair(pair<int, int> a, pair<int, int> b) {
    return a.fst < b.fst && a.sec < b.sec;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].fst >> a[i].sec;
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (compair(a[j], a[i])) dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << endl;
    return 0;
}