#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int mat[100][100] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        int matB[100][100] = {0};
        int top = 0, left = 0, bottom = n - 1, right = m - 1;
        while (top < bottom && left < right)
        {
            for (int i = left; i < right; i++)
            {
                matB[top][i + 1] = mat[top][i];
            }
            
            for (int i = top; i < bottom; i++)
            {
                matB[i + 1][right] = mat[i][right];
            }
            for (int i = right; i > left; i--)
            {
                matB[bottom][i - 1] = mat[bottom][i];
            }a
            for (int i = bottom; i > top; i--)
            {
                matB[i - 1][left] = mat[i][left];
            }
            left++, right--, top++, bottom--;
        }
        if ((n&1) && (m&1))
        {
            matB[n/2][m/2] = mat[n/2][m/2];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matB[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}