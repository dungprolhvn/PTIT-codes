#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


void bfs(vector<vector<int>> dsKe, int u, int v) {
    vector<bool> visited(v+1, 0);
    queue<int> qFrontier;
    qFrontier.push(u);
    while (!qFrontier.empty()) {
        int vertex = qFrontier.front();
        qFrontier.pop();
        if (!visited[vertex]) {
            visited[vertex] = true;
            cout << vertex << " ";
            for (int j : dsKe[vertex]) qFrontier.push(j);
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
        vector<vector<int>> dsKe(v+1);
        int a, b;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
        }
        for (int i = 1; i <= v; i++) {
            sort(dsKe[i].begin(), dsKe[i].end());
        }
        bfs(dsKe, u, v);
    }
    return 0;
}