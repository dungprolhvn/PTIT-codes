#include <bits/stdc++.h>

using namespace std;

// euler cycle undirected graph: weak connected, for v : deg % 2 == 0;


short check(vector<int> deg, int v) {
    int odd = 0;
    for (int i = 0; i < v; i++) {
        if (deg[i]&1) odd++;
    }
    if (!odd) return 2;
    if (odd==1) return 1;
    return 0;
}


int main() {
    int t, v, e, a, b;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        vector<int> deg(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            deg[a]++;
            deg[b]++;
        }
        cout << check(deg, v) << endl;
    }
}