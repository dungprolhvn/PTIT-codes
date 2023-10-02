#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    int n, x, tmp;
    while (t--)
    {
        cin >> n >> x;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp == x)
            {
                count++;
            }
        }
        if (!count)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}