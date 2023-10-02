#include <iostream>
#include <math.h>

typedef unsigned long long ll;

using namespace std;

int check(ll n, ll k)
{
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (sum >= k && i != n)
        {
            return 0;
        }
        if (i < k)
        {
            sum += i;
        }
        else
        {
            sum += i % k;
        }
    }
    if (sum == k)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t; ll n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << check(n, k) << endl; 
    }
    return 0;
}
