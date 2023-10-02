#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int matA[100][100]; int matB[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matA[i][j];
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matB[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matA[i][j] *= matB[i % m][j % m];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matA[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}