#include <bits/stdc++.h>
#define pb push_back
#define matrix vector<vector<long long>>
typedef long long ll;

using namespace std;
const long mod = 1e9 + 7;

matrix matrix_mul(matrix a, matrix b, int size) {
    matrix rs(size, vector<ll>(size, 0));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                rs[i][j] = (rs[i][j] + a[i][k]*b[k][j] % mod) % mod;
            }
        }
    }
    return rs;
}

matrix matrix_exp(matrix mat, int sz, int k) {
    if (k == 1) return mat;
    matrix tmp = matrix_exp(mat, sz, k/2);
    tmp = matrix_mul(tmp, tmp, sz);
    if (k&1) tmp = matrix_mul(tmp, mat, sz);
    return tmp;
}

int main()
{
    int t, n, k; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        matrix m(n, vector<ll>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        matrix rs = matrix_exp(m, n, k);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << rs[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}