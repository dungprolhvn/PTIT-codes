#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int calc(int n, int x, int y, int z) {
    // dp[i]: thoi gian it nhat de in ra man hinh i ki tu giong nhau
    int dp[n+1]; 
    dp[0] = 0;
    dp[1] = x;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + x;
        if (i&1)
            // nhan doi i//2 roi chen hoac nhan doi i//2+1 roi xoa
            dp[i] = min({dp[i], dp[i/2] + z + x, dp[i/2 + 1] + z + y}); 
        else
            // nhan doi i/2
            dp[i] = min(dp[i], dp[i/2] + z); 
    }
    return dp[n];
}

int main()
{
    int t, n, y, x, z; cin >> t;
    while (t--)
    {  
        cin >> n >> x >> y >> z;
        cout << calc(n, x, y, z) << endl;
    }
    return 0;
}