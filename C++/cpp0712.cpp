#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int a[20];

void printResult(int n, int k)
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i, int n, int k)
{
    for (int j = a[i - 1] + 1; j <= n-k+i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            printResult(n, k);
        }
        else
        {
            Try(i + 1, n, k);
        }
    }
}

int main()
{
    int t; cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        Try(1, n, k);
        cout << endl;
    }
    return 0;
}