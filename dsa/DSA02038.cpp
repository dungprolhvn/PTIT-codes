#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

void Try(int i, int k, int n, vector<int>& a, vector<int>& sub) {
    if (i == k + 1) {
        for (int num : sub) cout << num << " ";
        cout << endl;
    }
    else {
        for (int j = i - 1; j < n; j++) {
        if (sub.empty() || a[j] > sub.back()) {
            sub.pb(a[j]);
            Try(i + 1, k, n, a, sub);
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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> sub;
        Try(1, k, n, a, sub);
    }
    return 0;
}