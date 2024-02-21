#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int n;
vector<vector<int>> mc(11, vector<int>(11));
vector<string> paths;


bool valid(int i, int j) {
    return i < n && j < n && mc[i][j];
}


void Try(int i, int j, string path) {
    if (valid(i, j)) {
        if (i == n - 1 && j == n - 1) {
            paths.pb(path);
        }
        else {
            Try(i + 1, j, path + 'D');
            Try(i, j + 1, path + 'R');
        }
    }
}


void solve() {
    if (!mc[0][0]) {
        cout << -1;
        return;
    }
    Try(0, 0, "");
    sort(paths.begin(), paths.end());
    if (!paths.size()) {
        cout << -1;
    }
    else {
        for (string path : paths) {
            cout << path << " ";
        }
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        mc.assign(11, vector<int>(11));
        paths.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mc[i][j];
            }
        }
        solve();
        cout << endl;
    }
    return 0;
}