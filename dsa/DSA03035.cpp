#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n+5, 0), lis(n+5, 0);
    for (int i = 1; i <= n; i++) cin >> arr[i];
    int m = 0;
    for (int i = 1; i <= n; i++) {
        lis[arr[i]] = lis[arr[i]-1] + 1;
        m = max(m, lis[arr[i]]);
    }
    cout << n - m << endl;
    return 0;
}