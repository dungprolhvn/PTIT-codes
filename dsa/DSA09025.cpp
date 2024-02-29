#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


void dfs(vector<vector<int>> dsKe, int v, int s, int t) {
    vector<int> prev(v+1, 0);
    vector<bool> visited(v+1, 0);
    stack<int> frontier;
    frontier.push(s);
    while (!frontier.empty()) {
        int vertex = frontier.top();
        frontier.pop();
        if (vertex == t) {
            vector<int> rs;
            while (prev[vertex]) {
                rs.pb(vertex);
                vertex = prev[vertex];
            }
            rs.pb(s);
            for (int i = rs.size()-1; i >= 0; i--) cout << rs[i] << " ";
            cout << endl;
            return;
        }
        if (!visited[vertex]) {
            visited[vertex] = 1;
            for (int j : dsKe[vertex]) {
                frontier.push(j);
                prev[j] = vertex;
            }
        }
    }
    cout << -1 << endl;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int v, e, s, t;
        cin >> v >> e >> s >> t;
        vector<vector<int>> dsKe(v+1);
        int a, b;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
        }
        for (int i = 1; i <= v; i++) sort(dsKe[i].rbegin(), dsKe[i].rend());
        dfs(dsKe, v, s, t);
    }
    return 0;
}