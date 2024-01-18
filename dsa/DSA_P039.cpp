#include <bits/stdc++.h>

using namespace std;

int maxSum(int mat[21][21], int n) {
    int result = 0;
    int perm[n];
    for (int i = 0; i < n; i++) perm[i] = i;

    do {
        int curr_sum = 0;
        for (int i = 0; i < n; i++) {
            curr_sum += mat[i][perm[i]];
        }
        result = max(result, curr_sum);
    }
    while (next_permutation(perm, perm+n));

    return result;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mat[21][21];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }    
        }
        cout << maxSum(mat, n) << endl;
    }
}