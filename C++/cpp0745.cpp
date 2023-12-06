#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

ll fib(int n)
{
    int count = 1;
    const ll div = 1e9 + 7;
    ll a = 0, b = 1, c = 1;
    while (count < n)
    {
        c = ((a % div) + (b % div)) % div;
        a = b, b = c;
        count++;
    }
    return c;
}

int main()
{
    int t; cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        cout << fib(n) << endl;
    }
    return 0;
}