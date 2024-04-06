#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

string solve(int s, int d) {
    if (s > 9*d) return "-1";
    string num = "1";
    s -= 1;
    for (int i = 1; i < d; i++) num += "0";
    for (int i = d - 1; i >= 0 && s > 0; i--) {
        if (s >= 9) {
            num[i] += 9;
            s -= 9;
        }
        else {
            num[i] += s;
            s = 0;
        }
    }
    if (s) return "-1";
    return num;
}

int main()
{
    int t, s, d; cin >> t;
    while (t--)
    {
        cin >> s >> d;
        cout << solve(s, d) << endl;
    }
    return 0;
}