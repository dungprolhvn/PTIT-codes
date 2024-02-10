#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

vector<int> DFS(vector<vector<int>> dsKe, int v, int start)
{
    vector<int> path;
    vector<int> visited(v + 1, 0);
    stack<int> stackFrontier;
    stackFrontier.push(start);
    while (!stackFrontier.empty())
    {
        int u = stackFrontier.top();
        stackFrontier.pop();
        if (!visited[u])
        {
            visited[u] = 1;
            path.pb(u);
            for (int j : dsKe[u])
                stackFrontier.push(j);
        }
    }
    return path;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, u;
        cin >> v >> e >> u;
        vector<vector<int>> dsKe(v + 1);
        int a, b;
        for (int i = 0; i < e; i++)
        {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        for (int i = 1; i <= v; i++)
        {
            sort(dsKe[i].rbegin(), dsKe[i].rend());
        }
        // DFS
        vector<int> result = DFS(dsKe, v, u);
        for (int i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}