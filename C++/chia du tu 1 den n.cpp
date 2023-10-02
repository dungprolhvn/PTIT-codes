#include <iostream>
#include <cmath>
typedef long long ll;

using namespace std;

ll find(ll n, ll k)
{
    ll rs = 0;
    if (n <= k)
    {
        rs = n * (n + 1) / 2;
    }
    else
    {
        rs = (n / k) * k * (k - 1) / 2 + (n % k) * (n % k + 1) / 2;
    }
    return rs;
}
int main()
{
    int t; ll n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << find(n, k) << endl;
    }
    return 0;
}