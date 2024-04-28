#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int treeDepth(vector<vector<int>>& ke, int n) {
    int rs = 0;
    queue<pair<int, int>> q;
    q.push({1, 0});
    while (!q.empty()) {
        int node = q.front().first, depth = q.front().second;
        q.pop();
        rs = max(depth, rs);
        for (int i : ke[node]) {
            q.push({i, depth+1});
        }
    }
    return rs;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, u, v;
        cin >> n;
        vector<vector<int>> ke(n+1);
        for (int i = 0; i < n - 1; i++) {
            cin >> u >> v;
            ke[u].pb(v);
        }
        cout << treeDepth(ke, n) << endl;
    }
    return 0;
}