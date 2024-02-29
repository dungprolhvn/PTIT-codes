#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


bool dfs(const vector<vector<int>>& dsKe, int v, int start) {
    // return true if dfs(start) == V
    stack<int> frontier;
    vector<bool> visited(v+1, 0);
    frontier.push(start);
    while (!frontier.empty()) {
        int u = frontier.top();
        frontier.pop();
        if (!visited[u]) {
            visited[u] = 1;
            for (int j : dsKe[u]) frontier.push(j);
        }
    }
    for (int i = 1; i <= v; i++) {
        if (!visited[i]) return false;
    }
    return true;
}


bool ltManh(const vector<vector<int>>& dsKe, int v) {
    for (int i = 1; i <= v; i++) {
        if (!dfs(dsKe, v, i)) return false;
    }
    return true;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int v, e, a, b;
        cin >> v >> e;
        vector<vector<int>> dsKe(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
        }
        if (ltManh(dsKe, v)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}