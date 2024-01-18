#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

void solve(int *arr, int n)
{
    ll *arr2 = new ll[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i]*arr[i];
    }
    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0, r = i - 1;
        while (l < r)
        {
            if ((arr2[l] + arr2[r]) == arr2[i])
            {
                cout << "YES\n";
                return;
            }
            else if ((arr2[l] + arr2[r]) > arr2[i])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    int t; cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr +n);
        solve(arr, n);
    }
    return 0;
}