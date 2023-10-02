#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = n * n;
    int arr[400]; int mat[20][20];
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + l);
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int idx = 0;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right && top <= bottom; i++)
        {
            mat[top][i] = arr[idx++];
        }
        top++;
        for (int i = top; i <= bottom && left <= right; i++)
        {
            mat[i][right] = arr[idx++];
        }
        right--;
        for (int i = right; i >= left && top <= bottom; i--)
        {
            mat[bottom][i] = arr[idx++];
        }
        bottom--;
        for (int i = bottom; i >= top && left <= right; i--)
        {
            mat[i][left] = arr[idx++];
        }
        left++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}