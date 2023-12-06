#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int a[21];
int chose[21] = {0};

void printResult(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i, int n)
{
    for (int j = 1; j <= n; j++)
    {
        if (!chose[j])
        {
            chose[j] = 1;
            a[i] = j;
            if (i == n)
            {
                printResult(n);
            }
            else
            {
                Try(i + 1, n);
            }
            chose[j] = 0;
        }
    }
}

int main()
{
    int t; cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        Try(1, n);
        cout << endl;
    }
    return 0;
}