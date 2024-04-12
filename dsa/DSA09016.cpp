#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
bool flag;

void dfs(const vector<vector<int>>& ke, vector<int>& visited, int v, int s, int p = 0) {
    if (flag) return;
    visited[s] = 1;
    for (int i : ke[s]) {
        if (!visited[i]) dfs(ke, visited, v, i, s);
        else if (visited[i] == 1) {
            flag = true;
            return;
        }
    }
    visited[s] = 2;
}

bool existCycle(vector<vector<int>> list, int v) {
    vector<int> visited(v + 1, 0);
    for (int i = 1; i <= v; i++) {
        flag = false;
        dfs(list, visited, v, i);
        if (flag) {
            return true;
        }
    }
    return false;
}

int main()
{
    int t, v, e, a, b; cin >> t;
    while (t--)
    {
        cin >> v >> e;
        vector<vector<int>> ke(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            ke[a].pb(b);
        }
        if (existCycle(ke, v)) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}