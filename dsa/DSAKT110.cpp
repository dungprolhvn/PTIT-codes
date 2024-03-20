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
        vector<ll> steal(n+1, 0);
        steal[1] = v[0];
        for (int i = 2; i <= n; i++) {
            steal[i] = max(steal[i-1], steal[i-2]+v[i-1]);
        }
        cout << steal[n] << endl;
    }
    return 0;
}