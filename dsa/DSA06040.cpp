#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


vector<int> intersect(vector<int>a, vector<int> b) {
    vector<int> its;
    int l = a.size(), m = b.size();
    int i = 0, j = 0;
    while (i < l && j < m) {
        if (a[i] == b[j]) {
            its.pb(a[i]);
            i++, j++;
        }
        else {
            if (a[i] < b[j]) i++;
            else j++;
        }
    }
    return its;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int m, n, o;
        cin >> m >> n >> o;
        vector<int> a(m), b(n), c(o);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < o; i++) {
            cin >> c[i];
        }
        vector<int> giao = intersect(a, intersect(b, c));
        if (giao.size()) {
            for (int i : giao)
                cout << i << " ";
        }
        else cout << -1;
        cout << endl;
    }
    return 0;
}