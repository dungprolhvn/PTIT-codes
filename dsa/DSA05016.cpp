#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    ll ugly[10001];
    ugly[1] = 1;
    int i2, i3, i5;
    i2 = i3 = i5 = 1;
    for (int i = 2; i <= 10000; i++) {
        ugly[i] = min(ugly[i2]*2, min(ugly[i3]*3, ugly[i5]*5));
        if (ugly[i] == ugly[i2]*2) i2++;
        if (ugly[i] == ugly[i3]*3) i3++;
        if (ugly[i] == ugly[i5]*5) i5++;
    }
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ugly[n] << endl;
    }
    return 0;
}