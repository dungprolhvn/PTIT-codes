#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


void dfs(vector<vector<int>>& dsKe, vector<bool>& duyet, int u) {
    for (int dinh : dsKe[u]) {
        if (!duyet[dinh]) {
            duyet[dinh] = 1;
            dfs(dsKe, duyet, dinh);
        }
    }
}


void lietkeTru(vector<vector<int>>& dsKe, int v) {
    for (int i = 1; i <= v; i++) {
        vector<bool> visited(v+1, 0);
        visited[i] = 1;
        for (int j = 1; j <= v; j++) {
            if (j != i) {
                dfs(dsKe, visited, j);
                break;
            }
        }
        for (int j = 1; j <= v; j++) {
            if (!visited[j]) { // neu dfs ko qua het cac dinh (ko tinh i)
                cout << i << " ";
                break;
            }
        }
        
    }
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
        lietkeTru(dsKe, v);
        cout << endl;
    }
    return 0;
}