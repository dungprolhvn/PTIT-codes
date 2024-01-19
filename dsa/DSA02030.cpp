#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int a[15];


void Try(int i, int k, int n) {
    for (int j = 0; j <= n; j++) {
        if ((i > 0 && j >= a[i-1]) || i == 0) {
            a[i] = j;
            if (i == k - 1)
            {
                for (int j = 0; j < k; j++)
                {
                    cout << (char)(a[j] + 'A');
                }
                cout << endl;
            }
            else
            {
                Try(i + 1, k, n);
            }
        }
    }
}


int main()
{
    char c; int k;
    cin >> c >> k;
    Try(0, k, c - 'A');
    return 0;
}