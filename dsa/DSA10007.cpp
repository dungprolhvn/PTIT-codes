#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


void spanningTreeBFS(vector<vector<int>>& dsKe, int v, int e, int u) {
    vector<pair<int, int>> tree;
    queue<int> frontier;
    vector<bool> visited(v+1, 0);
    frontier.push(u);
    visited[u] = 1;
    while (!frontier.empty()) {
        int vertex = frontier.front();
        frontier.pop();
        for (int j : dsKe[vertex]) {
            if (!visited[j]) {
                frontier.push(j);
                visited[j] = 1;
                tree.pb(make_pair(vertex, j));
            }
        }
    }
    if (tree.size() != v - 1) {
        cout << -1 << endl;
        return;
    }
    for (auto p : tree) {
        cout << p.first << " " << p.second << endl;
    }
}


int main()
{
    int t, v, e, u, a, b; cin >> t;
    while (t--)
    {
        cin >> v >> e >> u;
        vector<vector<int>> dsKe(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        spanningTreeBFS(dsKe, v, e, u);
    }
    return 0;
}