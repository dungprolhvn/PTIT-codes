#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
vector<vector<int>> result;

void Try(int i, int n, vector<int>& v, vector<int>& sub, int currSum) {
    if (currSum & 1) {
        result.pb(sub);
    }
    if (i <= n) {
        for (int j = i - 1; j < n; j++) {
            if (sub.empty() || v[j] < sub.back()) {
                sub.pb(v[j]);
                Try(i + 1, n, v, sub, currSum + v[j]);
                sub.pop_back();
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        vector<int> subArr;
        Try(1, n, a, subArr, 0);
        sort(result.begin(), result.end());
        for (vector<int> tmp : result) {
            for (int i : tmp) cout << i << " ";
            cout << endl;
        }
        result.clear();
    }
    return 0;
}