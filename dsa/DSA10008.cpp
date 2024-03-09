#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define sec second
typedef unsigned long long ll;


using namespace std;


void djikstra(vector<vector<pair<int, int>>> dsKe, int v, int u) {
    vector<int> cost(v+1, INT_MAX);
    cost[u] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, u}); // {cost, current vertex}
    while (!pq.empty()) {
        pair<int, int> curr = pq.top();
        pq.pop();
        //
        if (curr.fst <= cost[curr.sec]) {
            for (auto vertex : dsKe[curr.sec]) {
                if (cost[vertex.fst] > cost[curr.sec] + vertex.sec) {
                    cost[vertex.fst] = cost[curr.sec] + vertex.sec;
                    pq.push({cost[vertex.fst], vertex.fst});
                }
            }
        }
    }
    for (int i = 1; i <= v; i++) cout << cost[i] << " ";
    cout << endl;
}


int main()
{
    int t, v, e, u, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> u;
        vector<vector<pair<int, int>>> dsKe(v+1);
        for (int i = 0; i < e; i++) {
            cin >> a >> b >> c;
            dsKe[a].pb({b, c});
            dsKe[b].pb({a, c});
        }
        djikstra(dsKe, v, u);
    }
    return 0;
}