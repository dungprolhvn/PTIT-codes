#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

char solve(int n, int k) {
    if (n == 1) return 'A';
    int mid = (int) pow(2, n-1);
    if (k == mid) return (char) 'A' + n - 1;
    return solve(n-1, abs(k - mid));
}


int main()
{
    int t, n, k; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}