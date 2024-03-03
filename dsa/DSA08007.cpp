#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    ll n;
    while (t--)
    {
        cin >> n;
        queue<ll> bdn;
        int cnt = 0;
        bdn.push(1);
        while (!bdn.empty()) {
            if (bdn.front() > n) break;
            cnt++;
            bdn.push(bdn.front()*10);
            bdn.push(bdn.front()*10+1);
            bdn.pop();
        }
        cout << cnt << endl;
    }
    return 0;
}