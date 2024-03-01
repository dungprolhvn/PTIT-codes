#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int bin_search(vector<int>& v, int l, int h, int t) {
    if (l > h) return -1;
    int m = (h+l) / 2;
    if (v[m] == t) return m;
    if (t < v[m]) return bin_search(v, l, m-1 , t);
    return bin_search(v, m+1, h, t);
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int idx = bin_search(arr, 0, n-1, x);
        if (idx != -1) cout << idx+1 << endl;
        else cout << "NO\n";
    }
    return 0;
}