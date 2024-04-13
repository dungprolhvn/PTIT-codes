#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool bipartite(vector<vector<int>> Ke, int v) {
    vector<int> color(v+1, -1);
    for (int i = 1; i <= v; i++) {
        if (color[i] == -1) {
            queue<int> q;
            q.push(i);
            color[i] = 1;
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int i : Ke[u]) {
                    if (color[i] == color[u]) return false;
                    else if (color[i] == -1) {
                        color[i] = 1 - color[u];
                        q.push(i);
                    }
                }
            }
        }
    }
    return true;
}

int main()
{
    int t, n, m, u, v; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<int>> Ke(n+1);
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            Ke[u].pb(v);
            Ke[v].pb(u);
        }
        if (bipartite(Ke, n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}