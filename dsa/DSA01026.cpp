#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void print(string locphat) {
    locphat = '8' + locphat +'6';
    int l = locphat.length();
    int count6 = 0;
    for (int i = 0; i < l - 1; i++) {
        if (locphat[i] == '8') {
            if (locphat[i + 1] == '8') return;
            else count6 = 0;
        }
        else if (locphat[i] == '6') {
            if (count6 == 3) return;
            else count6++;
        }
    }
    if (count6 == 3) return;
    cout << locphat << endl;
}


void locPhat(int n) {
    // Init
    n = n - 2;
    string lp = "";
    for (int i = 0; i < n; i++) {
        lp += '6';
    }
    // Loop
    while (1) {
        print(lp);
        int i = n - 1;
        while (lp[i] == '8') {
            lp[i] = '6';
            i--;
        }
        if (i < 0) break;
        lp[i] = '8';
    }
}


int main()
{
    int n;
    cin >> n;
    locPhat(n);
    return 0;
}