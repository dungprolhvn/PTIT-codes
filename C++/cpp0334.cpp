#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int sumnum(string s)
{
    int rs = 0;
    bool isNum = false;
    string tmp = "";
    for (int i = 0, l = s.length(); i < l; i++)
    {
        if (isdigit(s[i]))
        {
            if (!isNum)
            {
                isNum = true;
                tmp += s[i];
            }
            else
            {
                tmp += s[i];
            }
        }
        else
        {
            if (isNum)
            {
                rs += stoi(tmp);
                tmp = "";
                isNum = false;
            }
        }
    }
    if (tmp != "")
    {
        rs += stoi(tmp);
    }
    return rs;
}

int main()
{
    int t; cin >> t; cin.ignore();
    string s;
    while (t--)
    {
        cin >> s;
        cout << sumnum(s) << endl;
    }
    return 0;
}