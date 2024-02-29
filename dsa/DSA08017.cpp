#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


void locphat(int n) {
    // init
    string lp = "";
    for (int i = 0; i < n; i++) lp += '8';
    // loop
    while (true) {
        cout << lp << " ";
        int i = n - 1;
        while (lp[i] == '6') {
            lp[i] = '8';
            i--;
        }
        if (i<0) break;
        lp[i] = '6';
    }
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = n; i > 0; i--) {
            locphat(i);
        }
        cout << endl;
    }
    return 0;
}