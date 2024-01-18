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
        int result = 0;
        int *maxSum = new int[n]; // maximum sum that ends in ith position
        maxSum[0] = arr[0];
        maxSum[1] = arr[1];
        for (int i = 2; i < n; i++)
        {
            maxSum[i] = max(maxSum[i - 1], maxSum[i - 2] + arr[i]);
        }
        sort(maxSum, maxSum + n);
        cout << maxSum[n - 1] << endl;
    }
    return 0;
}