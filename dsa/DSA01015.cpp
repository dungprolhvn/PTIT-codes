#include <bits/stdc++.h>
#define pb push_back
#define for(i, a, b) for (int i = a; i <= b; i++)
#define forr(i, a, b) for (int i = a; i >= b; i--)
typedef unsigned long long ll;

using namespace std;


int main()
{
    // generate all number that contains only 0 and 9
    vector<ll> v;
    ll tmp = 9;
    v.pb(tmp);
    while (tmp*10 <= 9000000999999) {
        int s = v.size();
        tmp *= 10;
        v.pb(tmp);
        for(i, 0, s - 1) {
            v.pb(tmp + v[i]);
        }
    }

    // main
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int idx = 0;
        while (v[idx] % n) {
            idx++;
        }
        cout << v[idx] << endl;
    }
    return 0;
}