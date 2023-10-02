#include <bits/stdc++.h>
using namespace std;

string bigMinus(string a, string b)
{
    while (a.length() < b.length())
    {
        a = "0" + a;
    }
    while (b.length() < a.length())
    {
        b = "0" + b;
    }
    short int c = 0, tmp = 0;
    string rs = "";
    if (a > b)
    {
        for (int i = a.length() - 1; i >= 0; i--)
        {
            tmp = (a[i] - '0') - (b[i] - '0') - c;
            if (tmp < 0)
            {
                tmp += 10;
                c = 1;
            }
            else
            {
                c = 0;
            }
            rs = to_string(tmp) + rs;
        }
    }
    else
    {
        for (int i = a.length() - 1; i >= 0; i--)
        {
            tmp = (b[i] - '0') - (a[i] - '0') - c;
            if (tmp < 0)
            {
                tmp += 10;
                c = 1;
            }
            else
            {
                c = 0;
            }
            rs = to_string(tmp) + rs;
        }
    }
    return rs;
}

int main()
{
    int t;
    cin >> t;
    string a, b;
    while (t--)
    {
        cin >> a;
        cin >> b;
        cout << bigMinus(a, b) << endl;
    }
    return 0;
}