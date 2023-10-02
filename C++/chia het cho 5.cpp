#include <bits/stdc++.h>
using namespace std;

bool isDiv5(string s)
{
    
}

int main()
{
    int t; cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (isDiv5(s))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}