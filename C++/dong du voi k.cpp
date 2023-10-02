#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int g = arr[1] - arr[0];
        int rs = 0;
        for (int i = 2; i < n; i++)
        {
            g = __gcd(g, arr[i] - arr[i - 1]);
        }
        for (int i = 1; i <= g; i++)
        {
            if (g % i == 0)
            {
                rs++;
            }
        }
        cout << rs << endl;
    }
    return 0;
}