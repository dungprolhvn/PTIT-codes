#include <bits/stdc++.h>
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
    int t; cin >> t;
    cin.ignore();
    string line, buffer;
    map<string, int> createdEmail;
    while (t--)
    {
        getline(cin, line);
        stringstream ss(line);
        vector<string> v;
        while (ss >> buffer)
        {
            v.push_back(toLowerCase(buffer));
        }
        
        int s = v.size();
        string mail = "";
        mail += v[s - 1];
        for (int i = 0; i <= s - 2; i++)
        {
            mail += v[i][0];
        }
        if (createdEmail[mail])
        {
            createdEmail[mail] += 1;
            mail += to_string(createdEmail[mail]);
        }
        else
        {
            createdEmail[mail] = 1;
        }
        mail += "@ptit.edu.vn";
        cout << mail << endl;
    }

    return 0;
}