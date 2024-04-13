#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

vector<vector<int>> floyd(vector<vector<pair<int, int>>>& Ke, int v) {
    vector<vector<int>> dis(v, vector<int>(v, 1001));
    // Init
    for (int i = 1; i <= v; i++) {
        dis[i-1][i-1] = 0;
        for (pair<int, int> p : Ke[i]) {
            dis[i-1][p.first-1] = p.second;
        }
    }
    // Loop
    for (int k = 1; k <= v; k++) {
        for (int i = 1; i <= v; i++) {
            for (int j = 1; j <= v; j++) {
                if (dis[i-1][j-1] > dis[i-1][k-1] + dis[k-1][j-1]) {
                    dis[i-1][j-1] = dis[i-1][k-1] + dis[k-1][j-1];
                }
            }
        }
    }
    return dis;
}

int main()
{
    int n, m, u, v, c, q;
    cin >> n >> m;
    vector<vector<pair<int, int>>> ke(n+1);
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> c;
        ke[u].pb({v, c});
        ke[v].pb({u, c});
    }
    vector<vector<int>> dis = floyd(ke, n);
    cin >> q;
    while (q--) {
        cin >> u >> v;
        cout << dis[u-1][v-1] << endl;
    }
    return 0;
}