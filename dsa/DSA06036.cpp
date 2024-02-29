#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


bool hasTrioK(vector<int> v, int n, int k) {
    
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1;
        int r = n - 1;
        while (l < r) {
            ll tmp = v[i] + v[l] + v[r];
            if (tmp == k) {
                return true;
            }
            else if (tmp < k) {
                l++;
            }
            else {
                r--;
            }
        }
    }
    return false;
}


int main()
{
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (hasTrioK(v, n, k)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}