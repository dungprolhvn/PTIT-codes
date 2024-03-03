#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        // input
        int n; cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        // 
        bool found = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != b[i]) {
                cout << i+1 << endl;
                found = true;
                break;
            }
        }
        if (!found) cout << a[n-1] << endl;
    }
    return 0;
}