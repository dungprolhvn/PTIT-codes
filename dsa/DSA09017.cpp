#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
vector<int> parent;


bool isTree(vector<vector<int>> dsKe, int v) {
    vector<bool> visited(v+1, 0);
    vector<int> parent(v+1, 0);
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int vertex : dsKe[u]) {
            if (!visited[vertex]) {
                parent[vertex] = u;
                visited[vertex] = true;
                q.push(vertex);
            }
            else if (visited[vertex] && vertex != parent[u]) {
                return false;
            }
        }
    }
    for (int i = 1; i <= v; i++) if (!visited[i]) return false;
    return true;
}

int main()
{
    int a, b;
    int t, v; cin >> t;
    while (t--)
    {   
        cin >> v;
        vector<vector<int>> dsKe(v+1);
        for (int i = 0; i < v-1; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        if (isTree(dsKe, v)) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}