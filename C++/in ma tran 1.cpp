#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        int mat[100][100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << mat[i][j] << " ";
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    cout << mat[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}