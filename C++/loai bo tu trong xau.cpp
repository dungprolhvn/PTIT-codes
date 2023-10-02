#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string x;
    // remove x from s
    getline(cin, s);
    getline(cin, x);
    int i = s.find(x);
    if (i != -1)
    {
        s.erase(i, x.length() + 1);
    }
    //cout << x << endl;
    cout << s << endl;
    return 0;
}