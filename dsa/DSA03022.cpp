#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;
typedef short int si;

using namespace std;


int maxMultiply(vector<int> v, int n) {
    int a = v[n-1]*v[n-2]*v[n-3];
    int b = v[0]*v[1]*v[n-1];
    if (a>b) return a;
    return b;
}


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    cout << maxMultiply(v, n) << endl;
    return 0;
}