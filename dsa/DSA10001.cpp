#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct Coor {
    int x, y;
    bool operator==(Coor& other) {
        return x == other.x && y == other.y;
    };
};


struct State {
    Coor c;
    int turns, dir;
};


const int dy[]  = {0, 1, 0, -1};
const int dx[] = {-1, 0, 1, 0};

bool valid(vector<vector<char>>& mat, vector<vector<bool>>& visited ,int i, int j, int x, int y) {
    return i >= 0 && i < x && j >= 0 && j < y && !visited[i][j] && mat[i][j] != '*';
}

bool existPath(vector<vector<char>>& mat, int h, int w) {
    // Find S, T
    Coor S, T;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (mat[i][j] == 'S') S = {i, j};
            else if (mat[i][j] == 'T') T = {i, j};
        }
    }
    //
    vector<vector<bool>>visited(h, vector<bool>(w, false));
    queue<State> q;
    q.push({S, 0, -1});
    visited[S.x][S.y] = true;
    while (!q.empty()) {
        State tmp = q.front();
        q.pop();
        if (tmp.c == T) return true;
        for (int i = 0; i <= 3; i++) {
            int new_x = tmp.c.x + dx[i];
            int new_y = tmp.c.y + dy[i];
            if (valid(mat, visited, new_x, new_y, h, w)) {
                int turn = tmp.turns;
                if (tmp.dir == -1) turn = 0;
                else if (tmp.dir != i) turn++;
                if (turn < 3) {
                    q.push({{new_x, new_y}, turn, i});
                    visited[new_x][new_y] = true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int t, n, m; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<char>> table(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cin >> table[i][j];
        }
        if (existPath(table, n, m)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}