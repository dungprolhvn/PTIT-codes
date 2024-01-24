#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, q, tmp;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (m.find(tmp) != m.end()) {
                m[tmp]++;
            }
            else {
                m[tmp] = 1;
            }
        }
        int c = m[q];
        if (c) {
            cout << c << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}