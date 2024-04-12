#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
int parent[100005], setSize[100005];

void createSet(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        setSize[i] = 1;
    }
}

int Find(int e) {
    if (e != parent[e]) {
        return e = Find(parent[e]);
    }
    else return e;
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
    int t, v, e, a, b; cin >> t;
    while (t--)
    {
        cin >> v >> e;
        createSet(v);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            Union(a, b);
        }
        cout << *max_element(setSize, setSize + v) << endl;
    }
    return 0;
}