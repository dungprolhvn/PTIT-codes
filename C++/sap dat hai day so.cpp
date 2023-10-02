#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int tmp;
        map<int, int> a;
        int *a2 = new int[m];
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            a[tmp]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a2[i];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < a[a2[i]]; j++)
            {
                cout << a2[i] << " ";
            }
            a[a2[i]] = 0;
        }
        for (auto item : a)
        {
            if (item.second > 0)
            {
                cout << item.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}