#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
const long mod = 1e9+7;

int main()
{
    int t, n, k; cin >> t;
    int moves[100005] = {0};
    while (t--)
    {
        cin >> n >> k;
        long sum = 1;
        for (int i = 1; i <= k; i++) {
            moves[i] = sum;
            sum = (sum + moves[i]) % mod;
        }
        sum--;
        for (int i = k + 1, j = 1; i <= n; i++, j++) {
            moves[i] = sum;
            sum -= moves[j];
            sum = (sum + moves[i]) % mod;
            if (sum <= 0) sum += mod;
        }
        cout << moves[n] << endl;
    }
    return 0;
}