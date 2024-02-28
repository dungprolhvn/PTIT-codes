#include <bits/stdc++.h>
#define pb push_back
using namespace std;


void findPath(vector<vector<int>> dsKe, int v, int s, int t) {
    queue<int> frontier;
    vector<bool> visited(v+1, 0);
    vector<int> prev(v+1, 0);
    frontier.push(s);
    visited[s] = 1;
    while (!frontier.empty()) {
        int u = frontier.front();
        frontier.pop();
        if (u == t) {
            vector<int> path;
            while (prev[u]) {
                path.pb(u);
                u = prev[u];
            }
            path.pb(s);
            reverse(path.begin(), path.end());
            for (int num : path) {
                cout << num << " ";
            }
            return;
        }
        for (int j : dsKe[u]) {
            if (!visited[j]) {
                prev[j] = u;
                frontier.push(j);
                visited[j] = 1;
            }
        }
    }
    cout << -1;
}


int main() {
    int tc, v, e, s, t, a, b;
    cin >> tc;
    while (tc--) {
        cin >> v >> e >> s >> t;
        vector<vector<int>> dsKe(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        findPath(dsKe, v, s, t);
        cout << endl;
    }
}