#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
int num[1005], parent[1005];

void createSet(int v) {
    for (int i = 1; i <= v; i++) {
        parent[i] = i;
        num[i] = 1;
    }
}

int Find(int u) {
    if (u != parent[u]) {
        return u = Find(parent[u]);
    }
    return u;
}

void Union(int a, int b) {
    a = Find(a), b = Find(b);
    if (a != b) {
        if (num[a] < num[b]) swap(a, b);
        parent[b] = a;
        num[a] += num[b];
    }
}

int main()
{
    int t, v, e, a, b; cin >> t;
    while (t--)
    {
        cin >> v >> e;
        createSet(v);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            Union(a, b);
        }
        int cnt = 0;
        for (int i = 1; i <= v; i++) if (i == parent[i]) cnt++;
        cout << cnt << endl;
    }
    return 0;
}