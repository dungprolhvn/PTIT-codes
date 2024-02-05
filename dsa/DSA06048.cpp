#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int timesRotated(vector<ll> v, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) return i+1;
    }
    return 0;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << timesRotated(v, n) << endl;
    }
    return 0;
}