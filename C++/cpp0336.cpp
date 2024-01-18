#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

string findB(string a, string b)
{
    int l = a.length();
    int check[26] = {0};
    for (int i = 0; i < b.length(); i++)
    {
        check[b[i]-'a']++;
    }
    int minLen = b.length(); // minimum length of substr equal to length of b
    bool found;
    
    while (minLen <= l)
    {
        // init a check array for each minLen 
        int checkTmp[26] = {0};
        string tmp = a.substr(0, minLen);
        for (int j = 0; j < minLen; j++)
        {
            checkTmp[tmp[j] - 'a']++;
        }
        // loop
        for (int i = 0; i <= l - minLen; i++)
        {
            found = true;
            tmp = a.substr(i, minLen);
            for (int j = 0; j < 26; j++)
            {
                if (check[j] > 0 && checkTmp[j] < check[j])
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                return tmp;
            }
            // update checkTmp array for next iteration
            checkTmp[tmp[0]-'a']--;
            checkTmp[a[i+minLen]-'a']++;
        }
        minLen++;
    }
    return "-1";
}

int main()
{
    int t; cin >> t;
    string a, b;
    while (t--)
    {
        cin >> a >> b;
        cout << findB(a, b) << endl;
    }
    return 0;
}