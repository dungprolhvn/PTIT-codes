#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    while (t--)
    {
        set<string> a, b;
        string line, tmp;
        getline(cin, line);
        stringstream ss(line);
        while (ss >> tmp) {
            a.insert(tmp);
        }
        getline(cin, line);
        stringstream ss2(line);
        while (ss2 >> tmp)
        {
            b.insert(tmp);
        }
        for (auto word : a) 
        {
            bool out = true;
            for (auto word2 : b)
            {
                if (word == word2)
                {
                    out = false;
                    break;
                }
            }
            if (out) 
            {
                cout << word << " ";
            }
        }
        cout << endl;
    }
    return 0;
}