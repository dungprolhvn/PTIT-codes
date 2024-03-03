#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
ll fib[93];

ll calc(ll n, ll i) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (i <= fib[n - 2]) return calc(n - 2, i);
    return calc(n - 1, i-fib[n-2]);
}


void fibo() {
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= 92; i++) fib[i] = fib[i-2] + fib[i-1];
}


int main()
{
    fibo();
    int t; cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << calc(n, k) << endl;
    }
    return 0;
}