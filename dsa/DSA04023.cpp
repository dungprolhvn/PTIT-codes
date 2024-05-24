#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        long count = 0;
        for (int i = 0; i < n; i++) {
            int idx = lower_bound(v.begin(), v.end(), k + v[i]) - v.begin();
            count += (idx - i - 1);
        }
        cout << count << endl;
    }
    return 0;
}