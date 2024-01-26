#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

string findPytagoTrio(vector<ll> v, int n) {
    for (int i = n - 1; i >= 2; i--) {
        int start = 0;
        int end = i - 1;
        while (start < end) {
            ll tmp = v[start] + v[end];
            if (v[i] == tmp)
            {
                return "YES";
            }
            else if (v[i] > tmp) {
                start++;
            }
            else {
                end--;
            }
        }
    }
    return "NO";
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
            v[i] = v[i] * v[i];
        }
        sort(v.begin(), v.end());
        cout << findPytagoTrio(v, n) << endl;
    }
    return 0;
}