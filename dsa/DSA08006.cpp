#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    vector<ll> div;
    queue<ll> q;
    q.push(9);
    while (q.front() <= INT_MAX) {
        div.pb(q.front());
        q.push(q.front()*10);
        q.push(q.front()*10+9);
        q.pop();
    }
    sort(div.begin(), div.end());
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        for (ll num : div) {
            if (num % n == 0) {
                cout << num << endl;
                break;
            }
        }
    }
    return 0;
}