#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

struct node {
    string s;
    int step;
};

string rot(string s, bool l) {
    string rs = s;
    if (l) {
        // rotate left
        rs[0] = s[3]; rs[1] = s[0]; rs[4] = s[1]; rs[3] = s[4];
    }
    else {
        // rotate right
        rs[1] = s[4]; rs[2] = s[1]; rs[4] = s[5]; rs[5] = s[2];
    }
    return rs;
}

int min_step(string src, string tar) {
    queue<node> q;
    unordered_map<string, bool> visited;
    q.push({src, 0});
    visited[src] = true;
    node t; 
    string tmp;
    while (!q.empty()) {
        t = q.front();
        q.pop();
        if (t.s == tar) return t.step;
        // rotate left square and add to q
        tmp = rot(t.s, true);
        if (visited.find(tmp) == visited.end()) {
            q.push({tmp, t.step + 1});
        }
        // rotate right square
        tmp = rot(t.s, false);
        if (visited.find(tmp) == visited.end()) {
            q.push({tmp, t.step + 1});
        }
    }
    return -1;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s, t; char c;
        for (int i = 0; i < 6; i++) {
            cin >> c;
            s += c;
        }
        for (int i = 0; i < 6; i++) {
            cin >> c;
            t += c;
        }
        cout << min_step(s, t) << endl;
    }
    return 0;
}