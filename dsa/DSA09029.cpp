#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bitset<15> visited;
vector<int> dsKe[15];
bool check;

void dfs(int v, int u, int c) {
    if (c == v) {
        check = true;
        return;
    }
    if (check) return;
    for (int j : dsKe[u]) {
        if (!visited[j]) {
            visited[j] = 1;
            dfs(v, j, c+1);
            visited[j] = 0;
        }
    }
}


bool hamilton(int v) {
    for (int i = 1; i <= v; i++) {
        visited.reset();
        visited[i] = 1;
        dfs(v, i, 1);
        if (check) return true;
    }
    return false;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int v, e, a, b;
        cin >> v >> e;
        for (int i = 0; i < 15; i++) {
            dsKe[i].clear();
        }
        check = false;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        cout << hamilton(v) << endl;
    }
    return 0;
}