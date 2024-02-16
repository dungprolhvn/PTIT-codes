#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


inline void solve(vector<int> arr, int n) {
    vector<int> result;
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        if (st.empty()) {
            result.pb(-1);
        }
        else {
            result.pb(st.top());
        }
        st.push(arr[i]);
    }
    for (auto it = result.rbegin(); it != result.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        solve(arr, n);
    }
    return 0;
}