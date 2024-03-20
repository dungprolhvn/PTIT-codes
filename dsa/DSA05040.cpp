#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        vector<int> inc(n, 1), dec(n, 1); 
        // inc[i]/dec[i] length of incease/decreasing subarray that have i as its last
        for (int i = 1; i < n; i++) {
            if (v[i] > v[i-1]) inc[i] = inc[i-1]+1;
        }
        for (int i = n - 2; i >= 0; i--) {
            if (v[i] > v[i+1]) dec[i] = dec[i+1]+1;
        }
        int len, rs = 0;
        for (int i = 0; i < n; i++) {
            len = inc[i] + dec[i] - 1;
            if (len > rs) rs = len;
        }
        cout << rs << endl;
    }
    return 0;
}