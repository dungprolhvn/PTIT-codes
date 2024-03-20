#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        vector<int> a(n), b(m), c(k);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        for (int i = 0; i < k; i++) cin >> c[i];
        bool exist = false;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        int i = 0, j = 0, u = 0;
        while (i < n && j < m && u < k) {
            if (a[i] == b[j] && b[j] == c[u]) {
                cout << a[i] << " ";
                i++, j++, u++;
                exist = true;
            }
            else {
                int minVal = min(a[i], min(b[j], c[u]));
                if (minVal == a[i]) i++;
                if (minVal == b[j]) j++;
                if (minVal == c[u]) u++;
            }
        }
        if (!exist) cout << "NO";
        cout << endl;   
    }
}