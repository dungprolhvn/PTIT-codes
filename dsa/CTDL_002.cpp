#include <bits/stdc++.h>

using namespace std;

int counterr = 0; // counterrer subarray

void print(vector<int> v, bitset<10> b, int n, int k) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (b[i])
            sum += v[i];
    }
    if (sum != k) 
        return;
    counterr++;
    for (int i = 0; i < n; i++) {
        if (b[i]) 
            cout << v[i] << " ";
    }
    cout << endl;
}


void findSubarray(vector<int> v, int n, int k) {
    // Init
    bitset<10> binary(0);
    // Loop
    while (true) {
        print(v, binary, n, k);
        int i = n - 1;
        while (binary[i] == 1) {
            binary[i] = 0;
            i--;
        }
        if (i < 0) break;
        binary[i] = 1;
    }
    cout << counterr << endl;
}


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    findSubarray(a, n, k);
    return 0;
}