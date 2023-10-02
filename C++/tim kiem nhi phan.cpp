#include <bits/stdc++.h>
using namespace std;
int cmpfunc(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int bSearch(int *arr, int s, int e, int x)
{
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;
    if (arr[mid] == x)
    {
        return 1;
    }
    if (arr[mid] < x)
    {
        return bSearch(arr, mid + 1, e, x);
    }
    if (arr[mid] > x)
    {
        return bSearch(arr, s, mid, x);
    } 
}
int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        qsort(arr, n, sizeof(int), cmpfunc);
        cout << bSearch(arr, 0, n - 1, x) << endl;
    }
    return 0;
}