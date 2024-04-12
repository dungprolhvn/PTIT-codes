#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool dfs(vector<vector<int>>& ke, vector<bool>& visited, vector<bool>& recStack, int v, int s) {
    if (!visited[s]) {
        visited[s] = true;
        recStack[s] = true;
        for (int i : ke[s]) {
            if (recStack[i]) {
                return true;
            }
            else if (!visited[i]) {
                if (dfs(ke, visited, recStack, v, i)) return true;
            }
        }
    }
    recStack[s] = false;
    return false;
}

bool hasCycle(vector<vector<int>> ke, int v) {
    vector<bool> visited(v+1, false);
    vector<bool> recStack(v+1, false);
    for (int i = 1; i <= v; i++) {
        if (dfs(ke, visited, recStack, v, i)) {
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
        if (hasCycle(ke, v)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}