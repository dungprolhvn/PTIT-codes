#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool check(vector<int> a, vector<int> b, int s) {
    for (int i = 0; i < s; i++) {
        if (a[i] != b[i] && a[i] != b[s-i-1]) return false;
    }
    return true;
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> b(a);
        sort(b.begin(), b.end());
        cout << (check(a, b, n) ? "Yes" : "No") << endl;
    }
    return 0;
}