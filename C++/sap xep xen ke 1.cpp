#include <bits/stdc++.h>
using namespace std;

int main()
{
    short int t; cin >> t;
    short int n;
    while (t--)
    {
        cin >> n;
        int arr[1000];
        for (short int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        short int i = 0, j = n - 1;
        while (i < j)
        {
            cout << arr[j] << " " << arr[i] << " ";
            i++, j--;
        }
        if (n&1)
        {
            cout << arr[n/2] << " ";
        }
        cout << endl;
    }
    return 0;
}