#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;



bool cycle(vector<vector<int>>& dsKe, int v, int u) {
    queue<int> q;
    q.push(u);
    vector<bool> visited(v+1, 0);
    vector<int> prev(v+1, 0);
    visited[u] = 1;
    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        for (int j : dsKe[vertex]) {
            if (!visited[j]) {
                q.push(j);
                visited[j] = 1;
                prev[j] = vertex;
            }
            else if (visited[j] && prev[vertex] != j) {
                return true;
            }
        }
    }
    return false;
}


bool hasCycle(vector<vector<int>>& dsKe, int v) {
    for (int i = 1; i <= v; i++) {
        if (cycle(dsKe, v, i)) return true;
    }
    return false;
}


int main()
{
    int t, v, e, a, b; cin >> t;
    while (t--)
    {
        cin >> v >> e;
        vector<vector<int>> dsKe(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }     
        if (hasCycle(dsKe, v)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}