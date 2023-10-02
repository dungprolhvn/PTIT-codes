#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        queue<int> q;
        int tmp, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp)
            {
                q.push(tmp);
                count++;
            }
        }
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
        for (int i = 0; i < n - count; i++)
        {
            cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}