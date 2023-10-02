#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    fast;
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        int *a = new int[n + 1];
        int *b = new int[n + 1];
        a[0] = 0, b[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            b[i] += b[i - 1];
        }
        // a[i], b[i] will be the sum from element 0 to element i span(0, i) = a[i] 
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[j] - a[i - 1] == b[j] - b[i - 1]) // span(k, i) = a[i] - a[k - 1]
                {
                    if (j - i + 1 > ans)  // j - i + 1 la so phan tu trong khoang i den j
                    {
                        ans = j - i + 1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}