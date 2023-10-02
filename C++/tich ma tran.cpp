#include <bits/stdc++.h>
using namespace std;
int nhan(const int matA[50][50], const int matB[50][50], int a, int b, int m)
{
    // nhan hang a cua matA voi cot b cua matB
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += matA[a][i] * matB[i][b];
    }
    return sum;
}
int main()
{
    int n, m, p;
    cin >> n >> m >>p;
    int matA[50][50]; int matB[50][50]; int matRS[50][50];
    // nhap 2 ma tran A, B
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matA[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> matB[i][j];
        }
    }
    // nhan ma tran
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            matRS[i][j] = nhan(matA, matB, i, j, m);
        }
    }
    // in ket qua
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matRS[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}