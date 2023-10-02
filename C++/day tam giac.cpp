#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool found = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << arr[i] << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << arr[n - 1] << endl;
        }
    }
    
    return 0;
}