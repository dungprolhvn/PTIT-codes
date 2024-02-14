#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


bool dfs(vector<vector<int>> dsKe, int n, int s, int t) {
    vector<bool> visited(n + 1, 0);
    stack<int> frontier;
    frontier.push(s);
    while (!frontier.empty()) {
        int v = frontier.top();
        if (v == t) return true;
        frontier.pop();
        if (!visited[v]) {
            visited[v] = true;
            for (int j : dsKe[v]) frontier.push(j);
        }
    }
    return false;
}


bool bfs(vector<vector<int>> dsKe, int n, int s, int t) {
    queue<int> frontier;
    vector<bool> visited(n+1, 0);
    frontier.push(s);
    visited[s] = 1;
    while (!frontier.empty()) {
        int v = frontier.front();
        if (v == t) return true;
        frontier.pop();
        for (int j : dsKe[v]) {
            if (!visited[j]) {
                visited[j] = 1;
                frontier.push(j);
            }
        }
    }
    return false;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m, a, b, q;
        cin >> n >> m;
        vector<vector<int>> dsKe(n+1);
        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        cin >> q;
        for  (int i = 0; i < q; i++) {
            cin >> a >> b;
            if (dfs(dsKe, n, a, b)) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}