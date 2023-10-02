#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m; cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int mat[100][100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >>  mat[i][j];
            }
        }
        int top = 0, bottom = n - 1, left = 0, right = m - 1;
        
        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right && top <= bottom; i++)
            {
                cout << mat[top][i] << " ";
            }
            top++;
            for (int i = top; i <= bottom && left <= right; i++)
            {
                cout << mat[i][right] << " ";
            }
            right--;
            for (int i = right; i >= left && top <= bottom; i--)
            {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
            for (int i = bottom; i >= top && left <= right; i--)
            {
                cout << mat[i][left] << " ";
            }
            left++;
        }
        cout << endl;
    }
    return 0;
}