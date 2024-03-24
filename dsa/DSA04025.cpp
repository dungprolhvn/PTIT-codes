#include <bits/stdc++.h>
#define pb push_back

using namespace std;

typedef unsigned long long ll;
typedef vector<vector<ll>> matrix;
const long mod = 1e9+7;



matrix multiply(matrix a, matrix b) {
    matrix c(2, vector<ll>(2, 0));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                c[i][j] = (c[i][j] + a[i][k]*b[k][j]) % mod;
            }
        }
    }
    return c;
}


matrix matPower(matrix mat, int n) {
    if (n == 1) return mat;
    matrix tmp = matPower(mat, n/2);
    tmp = multiply(tmp, tmp);
    if (n&1) {
        tmp = multiply(tmp, mat);
    }   
    return tmp;
}


int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    matrix base = {{1, 1}, {1, 0}};
    matrix result = matPower(base, n-1);
    return result[0][0];
}

int main()
{

    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        cout << fib(n) << endl;
    }
    return 0;
}