#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int n;
vector<vector<int>> mt(10, vector<int>(10));
vector<vector<bool>> visited(10, vector<bool>(10, false));
bool reach;
vector<char> path;


char dir[] = {'D', 'L', 'R', 'U'};
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};


bool valid(int i, int j) {
    return i>=0 && j>= 0 && i < n && j < n && mt[i][j] && !visited[i][j];
}


void print() {
    for (char c : path) {
        cout << c;
    }
    cout << " ";
}


void Go(int x, int y) {
    if (x == n - 1 && y == n - 1) {
        reach = true;
        print();
    }
    else {
        for (int i = 0; i < 4; i++) {
            if (valid(x+dx[i], y+dy[i])) {
                // Choose the direction
                visited[x+dx[i]][y+dy[i]] = true;
                path.pb(dir[i]);
                Go(x+dx[i], y+dy[i]);
                path.pop_back();
                // Unchoose the direction
                visited[x+dx[i]][y+dy[i]] = false;
            }
        }
        
    }
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        path.clear();
        reach = false;
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mt[i][j];
                visited[i][j] = false;
            }
        }
        visited[0][0] = true;
        Go(0, 0);
        if (!reach) {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}