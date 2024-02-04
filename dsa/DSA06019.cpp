#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int freq[100001] = {0};


bool cmpFreq(int a, int b) {
    if (freq[a] == freq[b]) {
        return a < b;
    }
    return freq[a] > freq[b];
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        fill(freq, freq + 100001, 0);
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        sort(a, a+n, cmpFreq);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}