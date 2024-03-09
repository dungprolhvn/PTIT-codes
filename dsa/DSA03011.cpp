#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    const long mod = 1e9 + 7;
    int t, n, tmp; cin >> t;
    while (t--)
    {
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            pq.push(tmp);
        }
        long cost = 0;
        while (pq.size() > 1) {
            long a = pq.top();
            pq.pop();
            a += pq.top();
            pq.pop();
            a %= mod;
            cost = (cost + a) % mod;
            pq.push(a);
        }
        cout << cost << endl;
    }
    return 0;
}