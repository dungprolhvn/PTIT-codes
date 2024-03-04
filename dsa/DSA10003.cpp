#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

typedef struct Edge {
    int u, v;
} E;

vector<int> parent;


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


bool hasCycle(vector<E> dsC, int v, int e) {
    // make set
    parent.resize(v+1);
    for (int i = 1; i <= v; i++) parent[i] = i;
    for (E edge : dsC) {
        int a = findSet(edge.u), b = findSet(edge.v);
        if (a == b) return true;
        else unionSets(a, b);
    }
    return false;
}


int main()
{
    int t, v, e; cin >> t;
    while (t--)
    {
        cin >> v >> e;
        vector<E> dsCanh(e);
        for (int i = 0; i < e; i++) {
            cin >> dsCanh[i].u >> dsCanh[i].v;
        }
        if (hasCycle(dsCanh, v, e)) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }   
    return 0;
}