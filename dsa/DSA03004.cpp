#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        ll a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            if (i&1) {
                a = a*10+v[i];
            }
            else {
                b = b*10+v[i];
            }
        }
        cout << a + b << endl;
    }
    return 0;
}