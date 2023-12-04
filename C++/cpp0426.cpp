#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

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
        sort(arr, arr + n);
        int i = 0, j = n-1;
        while (i < j)
        {
            cout << arr[j] << " " << arr[i] << " ";
            i++, j--;
        }
        if (n&1)
        {
            cout << arr[i];
        }
        cout << endl;
        delete[] arr;
    }
    return 0;
}