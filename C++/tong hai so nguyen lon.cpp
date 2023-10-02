#include <bits/stdc++.h>
using namespace std;

string bigSum(string x, string y)
{
    while (x.length() < y.length())
    {
        x = "0" + x;
    }
    while (y.length() < x.length())
    {
        y = "0" + y;
    }
    short int c = 0, tmp = 0;
    string sum = "";
    for (int i = x.length() - 1; i >= 0; i--)
    {
        tmp = (x[i] - '0') + (y[i] - '0') + c;
        if (tmp > 9)
        {
            c = 1;
            tmp = tmp % 10;
        }
        else
        {
            c = 0;
        }
        sum = to_string(tmp) + sum;
    }
    if (c)
    {
        sum = to_string(c) + sum;
    }
    return sum;
}

int main()
{
    int t; cin >> t;
    string a, b;
    while (t--)
    {
        cin >> a;
        cin >> b;
        cout << bigSum(a, b) << endl;
    }
    return 0;
}