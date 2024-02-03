#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}


void print(vector<int> v) {
    for (int i : v) {
        cout << i;
    }
    cout << " ";
}


void genPerv(int n) {
    // Init
    vector<int> p(n, 0);
    for (int i = 0; i < n; i++) p[i] = i+1;
    // loop
    while (true) {
        print(p);
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
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        genPerv(n);
        cout << endl;
    }
    return 0;
}