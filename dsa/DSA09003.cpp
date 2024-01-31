#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        vector<set<int>> adjacentList(v + 1);
        int a, b;
        for (int i = 0; i < e; i++)
        {
            cin >> a >> b;
            adjacentList[a].insert(b);
        }
        for (int i = 1; i <= v; i++)
        {
            printf("%d: ", i);
            for (int j : adjacentList[i])
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
}