#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
int isPrime[MAX] = {0};
void sieve()
{
    isPrime[0] = 1;
    isPrime[1] = 1;
    for (int i = 2; i * i < MAX; i++)
    {
        if (!isPrime[i])
        {
            for (int j = i * i; j < MAX; j += i)
            {
                isPrime[j] = 1;
            }
        }
    }
}
int main()
{
    int t; cin >> t;
    int l, r;
    sieve();
    while (t--)
    {
        cin >> l >> r;
        int count = 0;
        for (int i = l; i <= r; i++)
        {
            if (!isPrime[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}