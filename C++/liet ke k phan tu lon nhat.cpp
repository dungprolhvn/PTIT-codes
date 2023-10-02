#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int arr[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }   
        sort(arr, arr + n);
        for (int i = n - 1; i >= n - k; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}