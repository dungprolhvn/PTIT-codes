#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int lcs(string s) {
    int rs = 1;
    int len = s.length(), l, r;
    for (int i = 1; i < len; i++) {
        // even length
        l = i - 1;
        r = i;
        while (l >= 0 && r < len && s[l] == s[r]) {
            l--;
            r++;
        }
        ++l, --r;
        if (r - l + 1 > rs) rs = r - l + 1;
        // odd length
        l = i - 1;
        r = i + 1;
        while (l >= 0 && r < len && s[l] == s[r]) {
            l--;
            r++;
        }
        ++l, --r;
        if (r - l + 1 > rs) rs = r - l + 1;
    }
    return rs;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << lcs(s) << endl;
    }
    return 0;
}