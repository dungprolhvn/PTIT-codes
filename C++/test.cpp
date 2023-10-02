#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        set<int> *row = new set<int>[n]; // store the unique element of each row
        map<int, int> count;             // store the count of unique element of each row
        int rs = 0, tmp;
        int mat[100][100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> tmp;
                row[i].insert(tmp);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int val : row[i])
            {
                count[val]++;
            }
        }
        for (auto i : count)
        {
            if (i.second == n)
            {
                rs++;
            }
        }
        cout << rs << endl;
    )}
    return 0;
}
