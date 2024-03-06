#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    vector<vector<int>> maxValue(1001, vector<int>(1001, 0));
    /* maxValue[i][j]: gia tri lon nhat cua tui the tich j
    voi cac do vat tu 1 den i */
    int t; cin >> t;
    while (t--)
    {
        int n, v;
        cin >> n >> v;
        vector<int> a(n+1), c(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> c[i];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= v; j++) {
                maxValue[i][j] = maxValue[i-1][j];
                if (a[i] <= j && maxValue[i - 1][j - a[i]]+c[i] > maxValue[i][j])
                    maxValue[i][j] = maxValue[i - 1][j - a[i]] + c[i];
            }
        }
        cout << maxValue[n][v] << endl;
    }
    return 0;
}