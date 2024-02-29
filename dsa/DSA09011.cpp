#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


bool valid(int a, int b, int n, int m) {
    return a && b && a <= n && b <= m;
}


void DFS(vector<vector<int>> &banDo, int x, int y, int a, int b) {
    if (valid(x, y, a, b) && banDo[x][y]) {
        banDo[x][y] = 0; // mark (x, y) as visited
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                DFS(banDo, x+i, y+j, a, b);
            }
        }
    }
}


int countDao(vector<vector<int>> &banDo, int n, int m)
{
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (banDo[i][j]) {
                count++;
                DFS(banDo, i, j, n, m); // dfs to visit the island
            }
        }
    }
    return count;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> banDo(n+1, vector<int>(m+1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) cin >> banDo[i][j];
        }
        cout << countDao(banDo, n, m) << endl;
    }
    return 0;
}