#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    vector<ll> frog(51, 1);
    frog[2] = 2;
    frog[3] = 4;
    for (int i = 4; i <= 50; i++) {
        frog[i] = frog[i-1] + frog[i-2] + frog[i-3];
    }
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        cout << frog[n] << endl;        
    }

    return 0;
}