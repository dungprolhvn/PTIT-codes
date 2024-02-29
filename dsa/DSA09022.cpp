#include <bits/stdc++.h>
#define pb push_back
#define f first
#define s second
typedef unsigned long long ll;

using namespace std;

void dfs(vector<vector<int>> dsKe, int u, int v, int e) {
    for (int i = 1; i <= v; i++)
    {
        sort(dsKe[i].rbegin(), dsKe[i].rend());
    }
    vector<bool> visited(v+1, 0);
    stack<int> frontier;
    frontier.push(u);
    while (!frontier.empty()) {
        int vertex = frontier.top();
        frontier.pop();
        if (!visited[vertex]) {
            visited[vertex] = true;
            cout << vertex << " ";
            for (int j : dsKe[vertex]) frontier.push(j);
        }
    }
    cout << endl;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int e, v, u;
        cin >> v >> e >> u;
        int a, b;
        vector<vector<int>> dsKe(v + 1);
        for (int i = 1; i <= e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
        }
        dfs(dsKe, u, v, e);
    }
    return 0;
}