#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


int count(int n, int k, int s) {
    if (n < k || s > n*k - (k-1)*k/2 || s < (k+1)*k/2) {
        // If n < k return 0 because dont exist set of size k that have max value of n
        // If sum s is too large or too small (out of possible value range), return 0
        return 0;
    }
    // Simply generate all combination size k of n and count comb that sums up to s
    // Init
    int rs = 0;
    vector<int> c(k+1);
    for (int i = 1; i <= k; i++) {
        c[i] = i;
    }
    // Loop
    while (true) {
        int sum = 0;
        for (int i : c) sum += i;
        if (sum == s) rs++;
        int i = k;
        while (c[i] == n-k+i) i--;
        if (i<=0) break;
        c[i] += 1;
        for (int j = i + 1; j <= k; j++) c[j] = c[j-1]+1;
    }
    return rs;
}


int main()
{
    int n, k, s;
    while (cin >> n >> k >> s) {
        if (!n && !k && !s) {
            break;
        }
        cout << count(n, k, s) << endl;
    }
    return 0;
}