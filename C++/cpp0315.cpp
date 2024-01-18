#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

string check(string s)
{
    for (int i = s.length() - 1; i >= 1; i--)
    {
        if (s[i] < s[i - 1])
        {
            // s[i - 1] to be replaced with the min number from i
            int idx = i;
            for (int j = i; j < s.length(); j++)
            {
                if (s[j] > s[idx] && s[j] < s[i - 1])
                {
                    idx = j;
                }
            }
            // replace s[i - 1] with s[idx]
            string rs = s;
            rs[i - 1] = s[idx];
            rs[idx] = s[i - 1];
            return rs;
        }
    }
    return "-1";
}

int main()
{
    int t; cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}