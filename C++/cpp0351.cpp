#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

string capitalize(string s)
{
    string rs = s;
    rs[0] = toupper(rs[0]);
    for (int i = 1; i < rs.length(); i++)
    {
        rs[i] = tolower(rs[i]);
    }
    return rs; 
}

int main()
{
    int t; cin >> t;
    string s;
    int k;
    while (t--)
    {
        cin >> k; cin.ignore();
        getline(cin, s);
        stringstream ss(s);
        string w;
        vector<string> name;
        while (ss >> w)
        {
            name.push_back(w);
        }
        int l = name.size();
        if (k == 1)
        {
            cout << capitalize(name[l - 1]) << " ";
            for (int i = 0; i < l - 1; i++)
            {
                cout << capitalize(name[i]) << " ";
            }
        }
        else
        {
            for (int i = 1; i < l; i++)
            {
                cout << capitalize(name[i]) << " ";
            }
            cout << capitalize(name[0]) << " ";
        }
        
        cout << "\n";
    }
    return 0;
}