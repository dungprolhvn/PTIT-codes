#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
const long mod = 1e9+7;

vector<vector<ll>> multiply(vector<vector<ll>> a, vector<vector<ll>> b, int n) {
    vector<vector<ll>> rs(n, vector<ll>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++) {
                rs[i][j] = (rs[i][j] + a[i][k]*b[k][j]) % mod;
            }
        }
    }
    return rs;
}

vector<vector<ll>> matrixExp(vector<vector<ll>> mt, int n, int k) {
    if (k == 1) return mt;
    vector<vector<ll>> rs(n, vector<ll>(n));
    rs = matrixExp(mt, n, k/2);
    rs = multiply(rs, rs, n);
    if (k&1) rs = multiply(rs, mt, n);
    return rs;
}


int main()
{
    int t, n, k; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<vector<ll>> matran(n, vector<ll>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matran[i][j];
            }
        }
        vector<vector<ll>> kq = matrixExp(matran, n, k);
        ll rs = 0;
        for (int i = 0; i < n; i++) {
            rs = (rs + kq[i][n-1]) % mod;
        }
        cout << rs << endl;
    }   
    return 0;
}