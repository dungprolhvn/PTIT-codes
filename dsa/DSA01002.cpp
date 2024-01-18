#include <bits/stdc++.h>

using namespace std;

void nextSubset(int* ss, int n, int k) {
    int i = k - 1;
    while (ss[i] > n-k+i) i--;
    if (i < 0) {
        for (int i = 1; i <= k; i++) {
            cout << i << " ";
        }
        cout << endl; return;
    }
    ss[i] += 1;
    for (int j = i + 1; j < k; j++) {
        ss[j] = ss[i] + (j - i);
    }
    for (int i = 0; i < k; i++) {
        cout << ss[i] << " ";
    }
    cout << endl;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int *subset = new int[k];
        for (int i = 0; i < k; i++) cin >> subset[i];
        nextSubset(subset, n, k);
    }
}