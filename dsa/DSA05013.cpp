#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
const long mod = 1e9+7;

int main()
{
    int ways[100008];
    ways[0] = 1;
    int t, n, k; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int sumWays = 1;
        for (int i = 1; i <= k; i++) {
            ways[i] = sumWays;
            sumWays = (sumWays + ways[i]) % mod;
        }
        int j = 1;
        sumWays--;
        for (int i = k+1; i <= n; i++) {
            ways[i] = sumWays;
            sumWays -= ways[j++]; // ways[j] no longer part of k elements that can climb to the end
            sumWays = (sumWays + ways[i]) % mod;
            if (sumWays <= 0) sumWays += mod;
        }
        cout << ways[n] << endl;
    }
    return 0;
}