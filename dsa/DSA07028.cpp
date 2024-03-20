#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

void calc(int *arr, int n) {
    stack<int> st; // index stack
    int nhip[n];
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        nhip[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }
    for (int i = 0; i < n; i++) cout << nhip[i] << " ";
    cout << endl;
}


int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        calc(a, n);
    }
    return 0;
}