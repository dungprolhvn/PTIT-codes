#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
const long mod = 1e9+7;
ll perm[1001][1001];

void init() {
    perm[0][0] = 1;
    for (int i = 1; i < 1001; i++) {
        perm[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            perm[i][j] = (perm[i-1][j] + j*perm[i-1][j-1]) % mod;
        }
    }
}

ll P(int n, int k) {
    if (n < k) return 0;
    return perm[n][k];
}

int main()
{
    init();
    int t, n, k; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << P(n, k) << endl;
    }
    return 0;
}