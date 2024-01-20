#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int col[11] = {0};
int diag1[111] = {0};
int diag2[111] = {0};

int counter = 0; // count the number of ways

void search(int y, int n) {
    if (y == n) {
        counter++;
        return;
    }
    for (int x = 0; x < n; x++) {
        if (col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1, n);
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        counter = 0;
        search(0, n);
        cout << counter << endl;
    }   
    return 0;
}