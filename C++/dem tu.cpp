#include <bits/stdc++.h>
using namespace std;
int countWord(string s)
{
    int rs = 0;
    bool inWord = false;
    for (int i = 0, l = s.length(); i < l; i++)
    {
        if (isalpha(s[i]))
        {
            if (!inWord)
            {
                inWord = true;
                rs++;
            }
        }
        else
        {
            inWord = false;
        }
    }
    
    return rs;
}
int main()
{
    int t; cin >> t;
    
    while (t--)
    {
        string s;
        cin.ignore();
        getline(cin, s);
        cout << countWord(s) << endl;
    }
    return 0;
}