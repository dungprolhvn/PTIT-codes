#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int find(vector<int> a, vector<int> b, int n, int m, int k) {
    int c = 0, i = 0, j = 0;
    while (i < n && j < m) {
        if (c == k - 1) {
            if (a[i] < b[j]) return a[i];
            else return b[j];
        }
        else {
            c++;
            if (a[i] < b[j]) i++;
            else j++;
        }
    }
    while (i < n) {
        if (c == k - 1) return a[i];
        else {
            i++, c++;
        }
    }
    while (j < m) {
        if (c == k - 1) return b[j];
        else {
            j++, c++;
        }
    }
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (int i = 0; i< n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        cout << find(a, b, n, m, k) << endl;
    }
    return 0;
}