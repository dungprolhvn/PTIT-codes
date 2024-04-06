#include <bits/stdc++.h>
#define matrix vector<vector<ll>>
typedef long long ll;


using namespace std;
const long mod = 1e9+7;

matrix matrix_multiply(matrix a, matrix b) {
    matrix result = {{0, 0}, {0, 0}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] = (result[i][j] + a[i][k]*b[k][j]) % mod;
            }
        }
    }
    return result;
}

matrix matrix_exp(matrix u, int n) {
    if (n == 1) return u;
    matrix tmp = matrix_exp(u, n/2);
    tmp = matrix_multiply(tmp, tmp);
    if (n&1) tmp = matrix_multiply(tmp, u);
    return tmp;
}

ll fib(int n) {
    if (n < 2) return n;
    matrix u = {{1, 1}, {1, 0}};
    matrix fib = matrix_exp(u, n-1);
    return fib[0][0];
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