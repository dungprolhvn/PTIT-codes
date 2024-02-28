#include <bits/stdc++.h>

using namespace std;

// euler cycle directed graph: weak connected, for v : deg+ = deg-;

int main() {
    int t, v, e, a, b;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        vector<int> degi(v+1);
        vector<int> dego(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            degi[b]++;
            dego[a]++;
        }
        bool c = false;
        for (int i = 1; i <= v; i++) {
            if (degi[i] != dego[i]) {
                c = true;
                break;
            }
        }
        if (c) cout << 0;
        else cout << 1;
        cout << endl;
    }
}