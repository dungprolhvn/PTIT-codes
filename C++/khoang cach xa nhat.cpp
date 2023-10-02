#include <bits/stdc++.h>

using namespace std;

void solve(int *arr, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] > arr[i])
            {
                max = (j - i > max) ? (j - i): max;
                break; 
            }
        }
    }
    cout << max << endl;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
}
