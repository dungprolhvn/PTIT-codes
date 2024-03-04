#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

vector<int> parent; 

struct Edge {
    int u, v, w; // dinh dau, dinh cuoi, trong so
};

bool compWeight(Edge a, Edge b) {
    return a.w < b.w;
}


int findSet(int v) {
    if (v == parent[v]) return v;
    return parent[v] = findSet(parent[v]);
}


// merge subset b to a
void unionSets(int a, int b) {
    a = findSet(a);
    b = findSet(b);
    if (a != b) parent[b] = a;
}


int mstKruskal(vector<Edge> dsCanh, int v, int e) {
    parent.resize(v+1);
    for (int i = 1; i <= v; i++) parent[i] = i; // make set

    vector<Edge> spanningTree;
    int cost = 0;
    sort(dsCanh.begin(), dsCanh.end(), compWeight);
    for (Edge e : dsCanh) {
        if (spanningTree.size() == v - 1) {
            return cost;
        }
        else {
            int u = findSet(e.u), v = findSet(e.v);
            if (u != v) { // them canh e ko tao thanh chu trinh
                cost += e.w;
                spanningTree.pb(e);
                unionSets(u, v);
            }
        }
    }
    return cost;
}


int main()
{
    int t, v, e; cin >> t;
    while (t--)
    {
        cin >> v >> e;
        vector<Edge> dsCanh(e);
        for (int i = 0; i < e; i++) {
            cin >> dsCanh[i].u >> dsCanh[i].v >> dsCanh[i].w;
        }
        cout << mstKruskal(dsCanh, v, e) << endl;
    }
    return 0;
}