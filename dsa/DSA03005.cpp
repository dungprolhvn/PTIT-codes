#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int sum = 0, sum1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end());
        k = min(k, n - k);
        for (int i = 0; i < k; i++) sum1 += arr[i];
        cout << sum - 2*sum1 << endl;
    }
    return 0;
}