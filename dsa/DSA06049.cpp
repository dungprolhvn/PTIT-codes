#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


ll countGreaterK(vector<int> v, int k) {
    ll count = 0;
    for (int i = 0; i < v.size(); i++) {
        int j = lower_bound(v.begin(), v.end(), v[i]+k) - v.begin();
        count += j - i - 1;
    }
    return count;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << countGreaterK(v, k) << endl;
    }
    return 0;
}