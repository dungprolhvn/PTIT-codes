#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<string> v(n);
    int min = INT_MAX, max = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        int tmp  = stoi(v[i]);
        if (tmp < min) min = tmp;
        if (tmp > max) max = tmp;
    }
    ll rs = max - min;
    
    return 0;
}