#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool check(vector<int> v, int n) {
    bool c[10001] = {false};
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[i - 1] || c[v[i]]) return false;
        c[v[i]] = 1;
    }
    return true;
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << check(v, n) << endl;
    }
    return 0;
}