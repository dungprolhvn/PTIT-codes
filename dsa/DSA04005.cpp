#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


ll fib[93];


void init() {
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= 92; i++) fib[i] = fib[i-2]+fib[i-1];
}


char indexAtFiboWord(ll n, ll i) {
    if (n==1) return 'A';
    if (n==2) return 'B';
    if (i <= fib[n-2]) return indexAtFiboWord(n-2, i);
    return indexAtFiboWord(n-1, i - fib[n-2]);
}


int main()
{
    init();
    int t; ll n, i; cin >> t;
    while (t--)
    {
        cin >> n >> i;
        cout << indexAtFiboWord(n, i) << endl;
    }
    return 0;
}