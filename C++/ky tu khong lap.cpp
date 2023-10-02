#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int check[100] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            check[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (check[s[i]] == 1)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}