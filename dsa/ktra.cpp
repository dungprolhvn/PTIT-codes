#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int calc(vector<vector<int>>& Ke, int n) {
    int cnt = 0;
    
    return cnt;
}

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> Ke(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        Ke[a].pb(b);
    }
    cout << calc(Ke, n) << endl;
    return 0;
}