#include <bits/stdc++.h>

using namespace std;

void BFS(vector<set<int>> adjacentList, int v, int u)
{
    queue<int> queueFrontier;
    vector<int> visited(v + 1, 0);
    queueFrontier.push(u);
    while (!queueFrontier.empty())
    {
        int vertex = queueFrontier.front();
        queueFrontier.pop();
        if (!visited[vertex])
        {
            cout << vertex << " ";
            visited[vertex] = 1;
            for (int i : adjacentList[vertex])
            {
                queueFrontier.push(i);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, u;
        cin >> v >> e >> u;
        vector<set<int>> adjacentList(v + 1);
        int a, b;
        for (int i = 0; i < e; i++)
        {
            cin >> a >> b;
            adjacentList[a].insert(b);
            adjacentList[b].insert(a);
        }
        BFS(adjacentList, v, u);
        cout << endl;
    }
}