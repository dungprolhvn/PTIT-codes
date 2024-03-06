#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
const long mod = 1e9+7;

int main()
{   
    vector<vector<int>> C(1001, vector<int>(1001, 0));
    for (int i = 0; i < 1001; i++) {
        C[i][0] = 1;
        C[i][i] = 1;
    }
    for (int i = 1; i < 1001; i++) {
        for (int j = 1; j < 1001; j++) {
            if (i==j) continue;
            C[i][j] = (C[i-1][j] + C[i-1][j-1]) % mod;
        }
    }
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }
    return 0;
}