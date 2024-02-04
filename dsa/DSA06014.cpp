#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

const int n = 1e6 + 1;
bitset<n> isPrime;


void sieve() {
    isPrime.set();
    isPrime[0] = 0;
    isPrime[1] = 0;
    for (int i = 2; i*i < n; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j < n; j += i) {
                isPrime[j] = 0;
            }
        }
    }
}


void solve(int n) {
    if (n%2) {
        int tmp = n - 2;
        if (isPrime[tmp]) {
            cout << 2 << " " << tmp << endl;
            return;
        }
    }
    else {
        int l = 2, r = n - 2;
        while (l <= r) {
            if (isPrime[l] && isPrime[r]) {
                cout << l << " " << r << endl;
                return;
            }
            l++, r--;
        }
    }
    cout << -1 << endl;
    return;
}


int main()
{
    isPrime.reset();
    sieve();
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}