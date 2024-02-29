#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t, n, tmp; cin >> t;
    while (t--)
    {
        ll sum = 0;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            pq.push(tmp);
        }
        while (pq.size() > 1) {
            ll tmp = pq.top();
            pq.pop();
            tmp += pq.top();
            pq.pop();
            sum += tmp;
            pq.push(tmp);
        }
        cout << sum << endl;
    }
    return 0;
}