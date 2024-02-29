#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


vector<short> rs;


void print() {
    cout << "(";
    for (int i = 0; i < rs.size() - 1; i++) cout << rs[i] << " ";
    cout << rs.back() << ") ";
}


void quaylui(int value) {
    for (int i = value; i > 0; i--) {
        if (i <= value && (rs.empty() || i <= rs.back())) {
            rs.pb(i);
            value -= i;
            if (value == 0) print();
            else if (value > 0) quaylui(value);
            value += i;
            rs.pop_back();
        }
    }
}


int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        quaylui(n);
        rs.clear();
        cout << endl;
    }
    return 0;
}