#include <bits/stdc++.h>
#define pb push_back
using namespace std;


vector<vector<int>> dsKe(1001);
vector<bool> visited(1001, 0);
vector<int> prev(1001, 0);
int s, t;
bool found;


void dfs(int u) {
    if (u == t) {
        found = true;
        vector<int> path;
        while (::prev[u]) {
            path.pb(u);
            u = ::prev[u];
        }
        path.pb(s);
        reverse(path.begin(), path.end());
        for (int num : path) {
            cout << num << " ";
        }
        t = -1; // cut other branches
    }
    else {
        visited[u] = 1;
        for (int j : dsKe[u]) {
            if (!visited[j]) {
                ::prev[j] = u;
                dfs(j);
                ::prev[j] = 0;
            }
        }
    }
}


int main() {
    int tc, v, e, a, b;
    cin >> tc;
    while (tc--) {
        found = false;
        cin >> v >> e >> s >> t;
        // cleaar
        for (int i = 1; i <= v; i++) {
            ::prev[i] = 0;
            visited[i] = 0;
            dsKe[i].clear();
        }
        // clear
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        dfs(s);
        if (!found) {
            cout << -1;
        }
        cout << endl;
    }
}