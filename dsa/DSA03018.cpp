#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

string solve(int n) {
    int count7 = n / 7;
    int remainder = n % 7;
    while (count7 >= 0 && remainder % 4) {
        count7--;
        remainder += 7;
    }
    if (count7 < 0) return "-1";
    string result = "";
    for (int i = 0, count4 = remainder / 4; i < count4; i++) {
        result += "4";
    }
    for (int i = 0; i < count7; i++) {
        result += "7";
    }
    return result;
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}