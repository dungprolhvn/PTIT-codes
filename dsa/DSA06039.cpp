#include <bits/stdc++.h>
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
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (m[v[i]] > 1) {
                cout << v[i] << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}