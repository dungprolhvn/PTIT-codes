#include <bits/stdc++.h>

using namespace std;

const char a = 'A', b = 'B', c = 'C';

void thapHN(int n, char x, char y, char z) {
    
    if (n == 1) {
        cout << x << " -> " << z << endl;
    }
    else {
        thapHN(n - 1, x, z, y);
        thapHN(1, x, y, z);
        thapHN(n - 1, y, x, z);
    }
}


int main() {
    int n;
    cin >> n;
    thapHN(n, a, b, c);
}