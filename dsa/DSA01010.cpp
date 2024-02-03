#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


int intersect(vector<int> a, vector<int> b, int n) {
    // return the number of a^b
    int result = 0;
    int i = 0, j = 0;
    while (i < n && j < n) {
        if (a[i] == b[j]) {
            result++;
            i++, j++;
        }
        else if (a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    return result;
}


int calc(vector<int> v, int n, int k) {
    vector<int> c(v);
    int i = k - 1;
    while (c[i] == n - k + i + 1) i--;
    if (i < 0) return k;
    c[i] += 1;
    for (int j = i + 1; j < k; j++) {
        c[j] = c[j-1] + 1;
    }
    int diff = k - intersect(c, v, k);
    return diff;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> c(k);
        for (int i = 0; i < k; i++) {
            cin >> c[i];
        }
        cout << calc(c, n, k) << endl;
    }
    return 0;
}