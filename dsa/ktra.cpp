#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
const int MAX = 1e5+1;
int parent[MAX];
int setSize[MAX];

void init(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        setSize[i] = 1;
    }
}

int Find(int e) {
    if (e != parent[e]) return e = Find(parent[e]);
    return e;
}

void Union(int a, int b) {
    a = Find(a), b = Find(b);
    if (a != b) {
        if (setSize[a] < setSize[b]) swap(a, b);
        parent[b] = a;
        setSize[a] += setSize[b];
    }
}

int main()
{
    int n, m, u, v;
    cin >> n >> m;
    init(n); 
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        Union(u, v);
    }
    int size1 = setSize[Find(1)];
    int size2 = 0;
    for (int i = 2; i <= n; i++) {
        int root = Find(i);
        if (root != Find(1)) {
            size2 = max(size2, setSize[root]);
        }
    }
    cout << size1 + size2 << endl; 
    return 0;
}