#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    int n;
    int tmp;
    while (t--)
    {
        cin >> n;
        bool found = false;
        int *arr = new int[n];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] - arr[i - 1] > 1)
            {
                cout << arr[i - 1] + 1 << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << n << endl;
        }
    }
    return 0;
}