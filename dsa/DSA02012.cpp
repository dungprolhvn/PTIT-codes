#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int kount, m, n;


bool notOutOfRange(int a, int b) {
    return a < m && b < n;
}


void quaylui(int i, int j) {
    if (i == m - 1 && j == n - 1) kount++;
    else {
        if (notOutOfRange(i, j)) {
            quaylui(i + 1, j);
            quaylui(i, j + 1);
        }
    }
}


int main()
{
    int t, tmp; cin >> t;
    while (t--)
    {
        kount = 0;
        cin >> m >> n;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> tmp;
            }
        }
        quaylui(0, 0);
        cout << kount << endl;
    }
    return 0;
}