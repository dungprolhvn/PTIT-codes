#include <bits/stdc++.h>
using namespace std;
bool isDep(string s)
{
    int l = s.length();
    int i = 0, j = l - 1;
    while (i < j)
    {
        if (s[i] != s[j] || (s[i] - '0') % 2 != 0 || (s[j] - '0') % 2 != 0)
        {
            return false;
        }
        ++i, --j;
    }
    return true;
}
int main()
{
    int t; cin >> t;
    cin.ignore();
    string s;
    while (t--)
    {
        cin >> s;
        if (isDep(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
