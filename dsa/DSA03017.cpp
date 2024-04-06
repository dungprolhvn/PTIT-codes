#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

ll calc(string s, ll k) {
    priority_queue<ll> pq;
    //
    int freq[26] = {0};
    for (char c : s) freq[c - 'A']++;
    for (int i = 0; i < 26; i++) if (freq[i]) pq.push(freq[i]);
    //
    ll tmp;
    for (ll i = 0; i < k; i++) {
        tmp = pq.top();
        pq.pop();
        pq.push(tmp - 1);
    }
    ll rs = 0;
    while (!pq.empty()) {
        tmp = pq.top();
        pq.pop();
        rs += tmp*tmp;
    }
    return rs;
}

int main()
{
    ll t, k; cin >> t;
    string s;
    while (t--)
    {
        cin >> k >> s;
        cout << calc(s, k) << endl;
    }
    return 0;
}