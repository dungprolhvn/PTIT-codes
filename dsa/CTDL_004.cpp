#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

ll countt = 0;
vector<int> v(100);


void updateCounter(vector<int> c) {
    int k = c.size();
    for (int i = 0; i < k-1; i++) {
        if (v[c[i] - 1] > v[c[i+1]-1]) {
            return;
        }
    }
    countt++;
}


void countSub(int n, int k) {
    // init
    vector<int> c(k);
    for (int i = 0; i < k; i++) {
        c[i] = i + 1;
    }
    // loop
    while (true) {
        updateCounter(c);
        int i = k - 1;
        while (c[i] == n - k + i + 1) i--;
        if (i < 0) break; 
        c[i] += 1;
        for (int j = i + 1; j < k; j++) {
            c[j] = c[j-1]+1;
        }
    }
}


int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    countSub(n, k);
    cout << countt << endl;
    return 0;
}