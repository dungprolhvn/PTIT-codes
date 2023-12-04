#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

ll findMod(string n, ll m)
{
    ll mod = 0;
    for (int i = 0; i < n.length(); i++)
    {
        mod = (mod * 10 + (n[i] - '0')) % m;
    }
    return mod;
}

int main()
{
    int t; cin >> t;
    string n; ll m;
    while (t--)
    {
        cin >> n >> m;
        cout << findMod(n, m) << endl;
    }
    return 0;
}