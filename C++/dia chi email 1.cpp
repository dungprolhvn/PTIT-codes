#include <bits/stdc++.h>
using namespace std;

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
    rs += name[s - 1];
    for (int i = 0; i < s - 1; i++)
    {
        rs += name[i][0];
    }
    rs += "@ptit.edu.vn";
    for (int i = 0, l = rs.length(); i < l; i++)
    {
        rs[i] = tolower(rs[i]);
    }
    cout << rs << endl;
    return 0;
}