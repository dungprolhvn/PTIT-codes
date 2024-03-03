#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


ll solve(ll a, ll b) {
    if (a == 1) return 1;
    ll mid = 1LL << (a - 1); // 2^(a-1)
    if (b == (mid)) return a;
    return solve(a-1, (b > mid) ? (b - mid) : b);
}


int main()
{
    int t; ll n, k; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}