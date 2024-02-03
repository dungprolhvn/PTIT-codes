#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}


int sttHoanvi(vector<int> v, int n) {
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }
    int count = 1;
    while (true) {
        if (v == p) {
            return count;
        }
        int i = n - 2;
        while (i >= 0 && p[i] > p[i+1]) i--;
        if (i < 0) break;
        int j = n - 1;
        while (p[j] < p[i]) j--;
        swap(p[i], p[j]);
        int l = i + 1, r = n - 1;
        while (l < r) {
            swap(p[l], p[r]);
            ++l, --r;
        }
        count++;
    }
    return count;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << sttHoanvi(v, n) << endl;
    }
    return 0;
}