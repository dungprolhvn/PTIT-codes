#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

void bfs(const vector<vector<int>>& dsKe, int v, vector<bool> &visited)
{
    queue<int> frontier;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            frontier.push(i);
            visited[i] = 1;
            break;
        }
    }
    while (!frontier.empty())
    {
        int u = frontier.front();
        frontier.pop();
        for (int j : dsKe[u])
        {
            if (!visited[j])
            {
                visited[j] = 1;
                frontier.push(j);
            }
        }
    }
}

int soTPLT(const vector<vector<int>>& dsKe, int v)
{
    int count = 0;
    vector<bool> visited(v + 1, 0);
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            count++;
            bfs(dsKe, v, visited);
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, a, b;
        cin >> v >> e;
        vector<vector<int>> dsKe(v + 100);
        for (int i = 0; i < e; i++)
        {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        cout << soTPLT(dsKe, v) << endl;
    }
    return 0;
}