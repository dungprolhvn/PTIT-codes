#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll solve(string s)
{
    ll rs = 0;
    int l = s.length();
    rs += l;
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j  < l; j++)
        {
            if (s[i] == s[j])
            {
                rs++;
            }
        }
    }
    return rs;
}

int main()
{
    int t; cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}