#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (k < v[0]) {
            cout << -1 << endl;
        }
        else if (k > v[n - 1]) {
            cout << v[n - 1] << endl;
        }
        else {
            auto it = upper_bound(v.begin(), v.end(), k);
            cout << it - v.begin() << endl;
        }
    }
    return 0;
}