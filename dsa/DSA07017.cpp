#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

void solve(vector<int> arr, int n) {
    stack<int> st;
    // luu chi so, khong luu gia tri
    vector<int> lon(n);
    vector<int> nho(n);

    // tim phan tu dau tien lon hon ben phai cua moi phan tu
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] <= arr[i]) st.pop();
        if (st.empty()) lon[i] = -1;
        else lon[i] = st.top();
        st.push(i);
    }

    // tim phan tu dau tien nho hon ben phai cua moi phan tu
    st = stack<int>();
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) st.pop();
        if (st.empty()) nho[i] = -1;
        else nho[i] = st.top();
        st.push(i);
    }

    // in kq
    for (int i = 0; i < n; i++) {
        if (lon[i] != -1 && nho[lon[i]] != -1) cout << arr[nho[lon[i]]] << " ";
        else cout << -1 << " ";
    }
    cout << endl;
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        solve(v, n);
    }
    return 0;
}