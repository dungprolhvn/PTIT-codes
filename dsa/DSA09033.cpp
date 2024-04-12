#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


bool perfect(vector<vector<int>> ke, int v) {
    for (int i = 1; i <= v; i++) {
        for (int j : ke[i]) {
            if (ke[i].size() != ke[j].size())
                return false;
        }
    }
    return true;
}

int main()
{
    int t, n, m, u, v; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<int>> ke(n+1);
        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            ke[u].pb(v);
            ke[v].pb(u);
        }
        if (perfect(ke, n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}