#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n; cin >> t;
    int arr[100000];
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int min_val = INT_MAX, tmp;
        for (int i = 1; i < n; i++)
        {
            tmp = arr[i] - arr[i - 1];
            min_val = (tmp < min_val) ? (tmp) : min_val;
        }
        cout << min_val << endl;
    }
    return 0;
}