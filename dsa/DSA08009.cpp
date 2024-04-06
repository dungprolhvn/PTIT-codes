#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int bien_doi(int s, int t) {
    if (s > t) return s - t;
    queue<pair<int, int>> q;
    bitset<20005> visited;
    q.push({s, 0});
    visited[s] = 1;
    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        if (p.first == t) return p.second;
        if (p.first - 1 > 0 && !visited[p.first - 1]) {
            visited[p.first - 1] = 1;
            q.push({p.first - 1, p.second + 1});
        }
        if (p.first < t && !visited[p.first*2]) {
            visited[p.first*2] = 1;
            q.push({p.first*2, p.second + 1});
        }
    }
    return -1;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int s, t;
        cin >> s >> t;
        cout << bien_doi(s, t) << endl;
    }
    return 0;
}