#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void gen(int n, int k) {
    // Init
    vector<int> c(k+1);
    for (int i = 0; i < k; i++) {
        c[i] = i+1;
    }
    // Loop
    while (true) {
        for (int i = 0; i < k; i++) cout << c[i];
        cout << " ";

        int i = k - 1;
        while (c[i] == n - k + i + 1) {
            i--;
        }
        if (i < 0) break;
        c[i] += 1;
        for (int j = i+1; j < k; j++) {
            c[j] = c[j-1] + 1;
        }
    }
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        gen(n, k);
        cout << endl;
    }
    return 0;
}