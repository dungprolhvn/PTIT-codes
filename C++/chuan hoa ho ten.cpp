#include <bits/stdc++.h>
using namespace std;
string cap(string s)
{
    string rs = s;
    rs[0] = toupper(rs[0]);
    for (int i = 1, l = rs.length(); i < l; i++)
    {
        rs[i] = tolower(rs[i]);
    }
    return rs;
}
string upp(string s)
{
    string rs = s;
    for (int i = 0, l = rs.length(); i < l; i++)
    {
        rs[i] = toupper(rs[i]);
    }
    return rs;
}
int main()
{
    string tmp;
    vector<string> name;
    while (cin >> tmp)
    {
        name.push_back(tmp);
    }
    int s = name.size();
    string rs = "";
    for (int i = 0; i < s - 1; i++)
    {
        name[i] = cap(name[i]);
        rs += name[i];
        rs += " ";
    }
    rs[rs.length() - 1] = ',';
    rs += " ";
    name[s - 1] = upp(name[s - 1]);
    rs += name[s - 1];
    cout << rs << endl;
    return 0;
}