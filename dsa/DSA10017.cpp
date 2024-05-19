#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define sec second
using namespace std;

bool bellman_ford(vector<vector<pair<int, int>>>& Ke, int v, int src) {
    vector<int> dis(v + 1, INT_MAX);
    dis[src] = 0;
    for (int k = 0; k < v - 1; k++) {
        for (int i = 1; i <= v; i++) {
            for (pair<int, int> p : Ke[i]) {
                int j = p.fst, w = p.sec;
                if (dis[i] != INT_MAX && dis[j] > dis[i] + w) {
                    dis[j] = dis[i] + w;
                }
            }
        }
    }
    // Check for negative cycle
    for (int i = 1; i <= v; i++) {
        for (pair<int, int> p : Ke[i]) {
            int j = p.fst, w = p.sec;
            if (dis[i] != INT_MAX && dis[j] > dis[i] + w) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int v, e, a, b, w;
        cin >> v >> e;
        vector<vector<pair<int, int>>> Ke(v + 1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b >> w;
            Ke[a].pb({b, w});
        }
        cout << bellman_ford(Ke, v, v) << endl;
    }
    return 0;
}