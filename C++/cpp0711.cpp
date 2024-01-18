#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

void generateBinary(int n)
{
    int bin[21] = {0};
    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << bin[i];
        }
        cout << " ";
        int j = n - 1;
        while (bin[j] != 0)
        {
            j--;
        }
        if (j < 0)
        {
            return;
        }
        bin[j] = 1;
        for (int i = j + 1; i < n; i++)
        {
            bin[i] = 0;
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
        generateBinary(n);
        cout << endl;
    }
    return 0;
}