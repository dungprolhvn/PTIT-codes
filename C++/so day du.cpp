#include <bits/stdc++.h>
using namespace std;

void check(string s)
{
    if (s[0] == '0')
    {
        cout << "INVALID\n";
        return;
    }
    short int l = s.length();
    short int digit[10] = {0};
    for (short int i = 0 ; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            cout << "INVALID\n";
            return;
        }
        else
        {
            digit[s[i] - '0']++;
        }
    }
    for (short int i = 0; i < 10; i++)
    {
        if (digit[i] == 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int t; cin >> t;
    string s;
    while (t--)
    {   
        cin >> s;
        check(s);
    }
    return 0;
}