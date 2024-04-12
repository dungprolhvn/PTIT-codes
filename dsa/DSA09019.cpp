#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
int parent[1005];

void createSet(int s) {
    for (int i = 1; i <= s; i++) parent[i] = i;
}

int Find(int e) {
    if (e != parent[e]) return e = Find(parent[e]);
    return e;
}

bool Union(int a, int b) {
    a = Find(a), b = Find(b);
    if (a != b) {
        parent[b] = a;
        return true;
    }
    return false;
}

int main()
{
    int t, v, e, a, b; cin >> t;
    while (t--)
    {
        bool cycle = false;
        cin >> v >> e;
        createSet(v);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            if (!Union(a, b)) {
                cycle = true;
            }
        }
        if (cycle) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}