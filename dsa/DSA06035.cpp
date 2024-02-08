#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int longestMountain(vector<int> v, int n) {
    vector<int> inc(n, 1), dec(n, 1);
    // calculate length of increasing array that ends at i
    for (int i = 1; i < n; i++) {
        if (v[i] > v[i-1]) inc[i] = inc[i-1] + 1;
    }
    // calculate length of decreasing array that ends at i
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] > v[i+1]) dec[i] = dec[i+1] + 1;
    }
    int length, maxLength = 0;
    for (int i = 0; i < n; i++) {
        length = inc[i] + dec[i] - 1;
        maxLength = max(maxLength, length);
    }
    return maxLength;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        cout << longestMountain(v, n) << endl;
    }
    return 0;
}