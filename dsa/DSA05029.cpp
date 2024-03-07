#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> ways(s.size()+1, 0);
        ways[0] = 1;
        for (int i = 1; i <= s.size(); i++) {
            if (s[i-1] > '0') ways[i] = ways[i-1];
            if (i > 1 && (s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6'))) 
                ways[i] += ways[i-2];
        }
        cout << ways.back() << endl;
    }
    return 0;
}