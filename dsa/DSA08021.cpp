#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct node {
    int a, b, step;
};

int min_step(vector<vector<int>>& mat, int m, int n) {
    vector<vector<bool>> visited(m, vector<bool>(n, 0));
    queue<node> q;
    node t = {0, 0, 0};
    q.push(t);
    while (!q.empty()) {
        t = q.front();
        q.pop();
        if (t.a == m - 1 && t.b == n - 1) return t.step;
        if (t.a + mat[t.a][t.b] < m && !visited[t.a + mat[t.a][t.b]][t.b]) {
            q.push({t.a + mat[t.a][t.b], t.b, t.step + 1});
            visited[t.a + mat[t.a][t.b]][t.b] = true;
        }
        if (t.b + mat[t.a][t.b] < n && !visited[t.a][t.b + mat[t.a][t.b]]) {
            q.push({t.a, t.b + mat[t.a][t.b], t.step + 1});
            visited[t.a][t.b + mat[t.a][t.b]] = true;
        }
    }
    return -1;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> mat(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
        cout << min_step(mat, m, n) << endl;
    }
    return 0;
}