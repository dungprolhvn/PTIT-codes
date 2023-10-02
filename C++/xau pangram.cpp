#include <bits/stdc++.h>
using namespace std;
bool isPangrammable(string s, int k)
{
    int check[1000] = {0};
    int l = s.length();
    if (l < 26)
    {
        return false;
    }
    for (int i = 0; i < l; i++)
    {
        check[s[i]]++;
    }
    int countUnique = 0;
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (check[i])
        {
            countUnique++;
        }
    }
    return (k + countUnique >= 26);
}
int main()
{
    int t, k;
    string s; 
    cin >> t;
    while (t--)
    {
        cin >> s;
        cin >> k;
        
        if (isPangrammable(s, k))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}