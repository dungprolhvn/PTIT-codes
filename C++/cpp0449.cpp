#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int findX(int *arr, int x, int n)
{
    int i = 0, j = 1;
    int tmp;
    while (i < n && j < n)
    {
        tmp = arr[j] - arr[i];
        if (tmp == x)
        {
            return 1;
        }
        else if (tmp > x)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return -1;
}

int main()
{
    int t; cin >> t;
    int n, x;
    while (t--)
    {
        cin >> n >> x;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << findX(arr, x, n) << endl;
    }
    return 0;
}