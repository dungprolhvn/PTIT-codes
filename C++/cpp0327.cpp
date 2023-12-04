#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

string toBase4(string bin)
{
    string rs = "";
    int l = bin.length();
    if (l % 2 != 0)
    {
        bin = "0" + bin;
        l++;
    }
    for (int i = 0; i < l; i += 2)
    {
        string chunk = bin.substr(i, 2);
        if (chunk == "00")
        {
            rs += "0";
        }
        else if (chunk == "01")
        {
            rs += "1";
        }
        else if (chunk == "10")
        {
            rs += "2";
        }
        else
        {
            rs += "3";
        }
    }
    return rs;
}

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int l = s.length();
        string q = toBase4(s);
        int sumOdd = 0, sumEven = 0;
        for (int i = 0, l = q.length(); i < l; i++)
        {
            if (i & 1)
            {
                sumOdd += q[i] - '0';
            }
            else
            {
                sumEven += q[i] - '0';
            }
        }

        if ((sumEven - sumOdd) % 5 == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}