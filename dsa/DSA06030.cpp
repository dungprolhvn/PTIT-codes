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
        stack<string> result;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n - 1; i++) {
            bool changed = false;
            for (int j = 0; j < n - 1; j++) {
                if (v[j] > v[j+1]) {
                    swap(v[j], v[j+1]);
                    changed = true;
                }
            }
            if (!changed) break;
            stringstream ss;
            ss << "Buoc " << i+1 << ": ";
            for (int num : v) ss << num << " ";
            result.push(ss.str());
        }
        while (!result.empty()) {
            cout << result.top() << endl;
            result.pop();
        }
    }
    return 0;
}