#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    short int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        short int arr[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] != 1)
            {
                count += (arr[i] - arr[i - 1] - 1);
            }
        }
        cout << count << endl;
    }
    return 0;
}