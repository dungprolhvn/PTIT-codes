#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

void bfs(vector<vector<int>> dsKe, int v, int s, int t)
{
    vector<bool> visited(v + 1, 0);
    queue<int> qFrontier;
    qFrontier.push(s);
    visited[s] = 1;
    vector<int> prev(v + 1, 0); // prev[i] is the previous node of i
    while (!qFrontier.empty())
    {
        int u = qFrontier.front();
        qFrontier.pop();
        if (u == t)
        {
            vector<int> path;
            while (prev[u])
            {
                path.pb(u);
                u = prev[u];
            }
            path.pb(s);
            for (int i = path.size() - 1; i >= 0; i--)
            {
                cout << path[i] << " ";
            }
            cout << endl;
            return;
        }
        for (int vertex : dsKe[u]) {
            if (!visited[vertex]) {
                visited[vertex] = 1;
                qFrontier.push(vertex);
                prev[vertex] = u;
            }
        }
    }
    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e, v, s, t, a, b;
        cin >> v >> e >> s >> t;
        vector<vector<int>> dsKe(v + 1);
        for (int i = 0; i < e; i++)
        {
            cin >> a >> b;
            dsKe[a].pb(b);
        }
        bfs(dsKe, v, s, t);
    }
    return 0;
}