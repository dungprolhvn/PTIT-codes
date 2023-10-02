#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    int n, k;
    while (t--)
    {
        cin >> k >> n;
        int *arr = new int[k * n];
        for (int i = 0, s = k*n; i < s; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + k*n);
        for (int i = 0, s = k * n; i < s; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}