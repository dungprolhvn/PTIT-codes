#include<bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

string toLowerCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    ifstream in("PTIT.in");
    string buffer;
    set<string> setto;
    while (in >> buffer)
    {
        setto.insert(toLowerCase(buffer));
    }

    for (string s : setto)
    {
        cout << s << endl;
    }
    in.close();
    return 0;
}