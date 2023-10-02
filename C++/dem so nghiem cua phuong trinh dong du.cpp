#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t, b, p; cin >> t;
    while (t--)
    {
        cin >> b >> p;
        int rs = 0;
        for (int i = 1; i < p; i++)
        {
            if ((i * i) % p == 1)
            {
                int last = i + p * (b/p); // the last number that satisfy i^2 mod p == 1
                if (last > b)
                {
                    last -= p;
                }
                rs += (last - i) / p + 1;
            }
        }
        cout << rs << endl;
    }
    return 0;
}