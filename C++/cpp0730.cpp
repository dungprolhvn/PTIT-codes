#include <bits/stdc++.h>
typedef long long ll;

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
        // Maximum sum of subarrays (kardane's algorithm)
        ll maxSum = arr[0]; // Storing the result
        ll maxAtCurrentPos = arr[0]; // Max sum at current position
        for (int i = 1; i < n; i++)
        {
            maxAtCurrentPos = (arr[i] > (maxAtCurrentPos+arr[i])) ? arr[i] : (maxAtCurrentPos+arr[i]);
            maxSum = max(maxSum, maxAtCurrentPos);
        }
        cout << maxSum << endl;
    }
    return 0;
}