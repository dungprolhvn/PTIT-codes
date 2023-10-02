#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string vovel = "ueoaiy";
    cin >> s;
    char tmp;
    for (int i = 0, l = s.length(); i <l; i++)
    {
        
        tmp = tolower(s[i]);
        if (vovel.find(tmp) == -1)
        {
            cout << '.';
            cout << tmp;
        }
    }
    cout << endl;
    return 0;
}