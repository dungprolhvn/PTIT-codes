#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

const int dy[] = {0, 1, 0, -1};
const int dx[] = {-1, 0, 1, 0};

struct Node {
    int u, v, c;
    bool operator<(const Node& other) const {
        return c > other.c;
    }
};

bool valid(int x, int y, int n, int m) {
    return 0 <= x && x < n && 0 <= y && y < m;
}


int dijkstra(int** mat, int n, int m) {
    int cost[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cost[i][j] = 50000;
        }
    }
    priority_queue<Node> pq;
    pq.push({0, 0, mat[0][0]});
    while (!pq.empty()) {
        Node tmp = pq.top();
        pq.pop();
        if (tmp.c <= cost[tmp.u][tmp.v]) {
            cost[tmp.u][tmp.v] = tmp.c;
            for (int i = 0; i <= 3; i++) {
                int cx = tmp.u + dx[i];
                int cy = tmp.v + dy[i];
                if (valid(cx, cy, n, m)) {
                    if (cost[cx][cy] > tmp.c + mat[cx][cy]) {
                        cost[cx][cy] = tmp.c + mat[cx][cy];
                        pq.push({cx, cy, cost[cx][cy]});
                    }
                }
            }
        }
    }
    return cost[n-1][m-1];
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int** mat = new int*[n];
        for (int i = 0; i < n; i++) {
            mat[i] = new int[m];
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        cout << dijkstra(mat, n, m) << endl;
    }
    return 0;
}