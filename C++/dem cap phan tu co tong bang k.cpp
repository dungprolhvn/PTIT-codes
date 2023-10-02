#include <bits/stdc++.h>
using namespace std;

int main()
{
    short int t; cin >> t;
    short int n, k;
    while (t--)
    {
        cin >> n >> k;
        int arr[100];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i; j--)
            {
                if (arr[i] + arr[j] == k)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}