#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

string processed(string s)
{
    string rs;
    int l = s.length();
    int tmp = 0;
    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            rs += s[i];
        }
        else
        {
            tmp += (s[i] - '0');
        }
    }
    sort(rs.begin(), rs.end());
    rs += to_string(tmp);
    return rs;
}

int main()
{
    int t; cin >> t; cin.ignore();
    string s;
    while (t--)
    {
        cin >> s;
        cout << processed(s) << endl;
    }
    return 0;
}