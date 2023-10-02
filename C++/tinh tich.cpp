#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    int n, m;
    while (t--)
    {
        cin >> n >> m;
        int *a = new int[n];
        int *b = new int[m];
        int min = INT_MAX, max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        ll rs = (ll) *max_element(a, a+n) * *min_element(b, b+m);
        cout << rs << endl;
    }
    return 0;
}