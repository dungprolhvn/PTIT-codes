#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll *rs = new ll[n];
        fill_n(rs, n, -1);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < n && arr[i] >= 0)
            {
                rs[arr[i]] = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << rs[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}