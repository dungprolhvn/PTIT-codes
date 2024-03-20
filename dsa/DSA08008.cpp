#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


void findBdn(int n) {
    queue<ll> q;
    q.push(1);
    ll tmp;
    while (!q.empty()) {
        tmp = q.front();
        q.pop();
        if (tmp % n == 0) {
            cout << tmp << endl;
            return;
        }
        q.push(tmp*10);
        q.push(tmp*10+1);
    }
}


int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        findBdn(n);
    }
    return 0;
}