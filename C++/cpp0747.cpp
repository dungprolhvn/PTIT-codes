#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int solve(string s)
{
    int rs = 0;
    int start = s.find("100");
    int end = start + 2;
    while (start != string::npos)
    {
        while (1)
        {
            if (s[start-1] == '1' && s[end+1] == '0' && s[end+2] == '0')
            {
                end = start + 4;
                start -= 1;
            }
            else if (s[start-2] == '1' && s[start-1] == '0' && s[end+1] == '0')
            {
                end = start + 3;
                start -= 2;
            }
            else
            {
                // update result
                if ((end - start + 1) > rs)
                {
                    rs = end - start + 1;
                }
                //cout << "deleted " << s.substr(start, end-start+1) << endl;
                s = s.substr(0, start) + s.substr(end+1);
                //cout << "s after delete " << s << endl;
                break;
            }
        }
        start = s.find("100");
        end = start + 2;
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