#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    short c, n;
    cin >> c >> n;
    vector<short> w(n+1);
    for (int i = 1; i <= n; i++) cin >> w[i];
    vector<vector<int>> maxW(n+1, vector<int>(c+1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= c; j++) {
            maxW[i][j] = maxW[i-1][j];
            if (w[i] <= j && maxW[i-1][j-w[i]]+w[i] > maxW[i][j])
                maxW[i][j] = maxW[i-1][j-w[i]]+w[i];
        }
    }
    cout << maxW[n][c] << endl;
    return 0;
}