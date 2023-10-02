#include <bits/stdc++.h>
using namespace std;
int lSearch(int *arr, int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int t, n, x; cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
        }
        cout << lSearch(arr, x, n) << endl;
    }
    return 0;
}