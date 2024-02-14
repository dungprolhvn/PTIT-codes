#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bitset<1005> visited;
vector<vector<int>> dsKe(1005);


void bfs(int v, int i) {
    queue<int> frontier;
    frontier.push(i);
    visited[i] = 1;
    while (!frontier.empty()) {
        int u = frontier.front();
        frontier.pop();
        for (int j : dsKe[u]) {
            if (!visited[j]) {
                visited[j] = 1;
                frontier.push(j);
            }
        }
    }
}


int soTPLT(int v) {
    int count = 0;
    for (int i = 1; i <= v; i++) {
        if (!visited[i]) {
            count++;
            bfs(v, i);
        }
    }
    return count;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int v, e, a, b;
        cin >> v >> e;
        for (int i = 1; i <= v; i++) {
            visited[i] = 0;
            dsKe[i].clear();
        }
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        cout << soTPLT(v) << endl;
    }
    return 0;
}