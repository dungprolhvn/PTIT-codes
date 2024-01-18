#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

bool check(string s)
{
    map<char, int> m;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        m[s[i]]++;
    }
    int max_freq = 0;
    for (auto pair : m)
    {
        max_freq = max(max_freq, pair.second);
    }
    return max_freq <= (l + 1) / 2;
}

int main()
{
    int t; cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (check(s))
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