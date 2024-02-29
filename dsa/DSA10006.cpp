#include <bits/stdc++.h>
#define pb push_back

using namespace std;



vector<pair<int, int>> tree;


void dfs(vector<vector<int>>& dsKe, int u, vector<bool>& visited) {
    visited[u] = 1;
    for (int j : dsKe[u]) {
        if (!visited[j]) {
            tree.pb({u, j});
            dfs(dsKe, j, visited);
        }
    }
}


void spanningTreeDfs(vector<vector<int>>& dsKe, int v, int s) {
    vector<bool> visited(v+1, 0);
    dfs(dsKe, s, visited);
    if (tree.size() != v - 1) {
        cout << -1 << endl;
        return;
    }
    for (auto p : tree) {
        cout << p.first << " " << p.second << endl;
    }
}


int main() {
    int t, v, e, u, a, b;
    cin >> t;
    while (t--) {
        tree.clear();
        cin >> v >> e >> u;
        vector<vector<int>> dsKe(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        spanningTreeDfs(dsKe, v, u);
    }
}