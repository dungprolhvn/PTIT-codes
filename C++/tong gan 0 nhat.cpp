#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;
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
        if (arr[0] >= 0)
        {
            cout << arr[0] + arr[1];
        }
        else
        {
            int sum = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                for (int j = n - 1; j > i; j--)
                {
                    if (abs(arr[i] + arr[j]) < abs(sum))
                    {
                        sum = arr[i] + arr[j];
                    }
                }
            }
            cout << sum;
        }
        cout << endl;
    }
    return 0;
}