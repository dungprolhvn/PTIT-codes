#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct state {
    int x, y;
    int step;
};

const int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
bool visited[8][8];

bool legit(int x, int y) {
    return x >= 0 && x < 8 && y >= 0 && y < 8 && !visited[x][y];
}

int step(string src, string tar) {
    int xx = tar[0] - 'a', yy = tar[1] - '1';
    queue<state> q;
    q.push({src[0] - 'a', src[1]-'1', 0});
    visited[src[0]-'a'][src[1]-'1'] = true;
    state t; 
    int newx, newy;
    while (!q.empty()) {
        t = q.front();
        q.pop();
        if (t.x == xx && t.y == yy) return t.step;
        for (int i = 0; i < 8; i++) {
            newx = t.x + dx[i];
            newy = t.y + dy[i];
            if (legit(newx, newy)) {
                q.push({newx, newy, t.step + 1});
                visited[newx][newy] = true;
            }
        }
    }
    return -1;
}

int main()
{
    int t; cin >> t;
    string s, e;
    while (t--)
    {
        cin >> s >> e;
        cout << step(s, e) << endl;
        memset(visited, false, sizeof(visited));
    }
    return 0;
}