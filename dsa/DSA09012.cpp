#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


bool dfs(vector<vector<int>> dsKe, int v, int tru) {
    stack<int> frontier;
    vector<int> visited(v+1, 0);                
    // bo qua dinh tru 
    visited[tru] = 1;
    for (int i = 1; i <= v; i++) {
        if (!visited[i]) {
            frontier.push(i);
            visited[i] = 1;
            break;
        }
    }
    while (!frontier.empty()) {     
        int u = frontier.top();
        frontier.pop();
        for (int dinh : dsKe[u]) {
            if (!visited[dinh]) {
                frontier.push(dinh);
                visited[dinh] = 1;
            }
        }
    }
    for (int i = 1; i <= v; i++) {
        if (i == tru) continue;
        if (!visited[i]) {
            return false;}
    }
    return true;
}


void lietKeDinhTru(vector<vector<int>> dsKe, int v) {
    vector<int> dinhTru;
    for (int i = 1; i <= v; i++) {
        if (!dfs(dsKe, v, i)) dinhTru.pb(i);
    }
    for (int tru : dinhTru) cout << tru << " ";
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int v, e, a, b;
        cin >> v >> e;
        vector<vector<int>> dsKe(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            dsKe[a].pb(b);
            dsKe[b].pb(a);
        }
        lietKeDinhTru(dsKe, v);
        cout << endl;
    }
    return 0;
}