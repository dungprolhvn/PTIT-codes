#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void print(int arr[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) count++;
    }
    if (count == k) {
        for (int i = 0; i < n; i++) cout << arr[i];
    }
    else {
        return;
    }
    cout << endl;
}


void gen(int n, int k) {
    // Init
    int bin[20] = {0};
    // Loop
    while (true) {
        print(bin, n, k);
        int i = n - 1;
        while (bin[i] == 1) {
            bin[i] = 0;
            i--;
        }
        if (i < 0) break;
        bin[i] = 1;
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
    }
    return 0;
}