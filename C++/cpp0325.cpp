#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    string n;
    while (t--)
    {
        cin >> n;
        int sumOdd = 0, sumEven = 0;
        for (int i = 0, l = n.length(); i < l; i++)
        {
            if (i&1)
            {
                sumOdd += n[i] - '0';
            }
            else
            {
                sumEven += n[i] - '0';
            }
        }
        if ((sumEven - sumOdd) % 11 == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}