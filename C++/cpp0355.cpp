#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


string tolowercase(string s)
{
    string rs = s;
    for (int i = 0; i < s.length(); i++)
    {
        rs[i] = tolower(rs[i]);
    }
    return rs;
}

int main()
{
    string w;
    bool cap = true;
    while (cin >> w)
    {
        w = tolowercase(w);
        // if end of a sentences
        if (cap)
        {
            w[0] = toupper(w[0]);
            cap = false;
        }
        if (w[w.length() - 1] == '.' || w[w.length() - 1] == '!' || w[w.length() - 1] == '?')
        {
            w.pop_back();
            cout << w << "\n";
            cap = true;
        }
        else
        {
            cout << w << " ";
        }
        
    }
    return 0;
}