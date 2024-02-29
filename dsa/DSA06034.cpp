#include <bits/stdc++.h>
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
        sort(v.begin(), v.end());
        ll count = 0;
        ll tmp = 0;
        pair<vector<int>::iterator, vector<int>::iterator> bounds;
        for (int i = 0; i < n; i++) {
            tmp = k - v[i];
            bounds = equal_range(v.begin() + i + 1, v.end(), tmp);
            count += bounds.second - bounds.first;
        }
        cout << count << endl;
    }
    return 0;
}