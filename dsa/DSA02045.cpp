#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

vector<string> result;
string s;
int l;
bitset<20> bin;

void update() {
    stringstream ss;
    for (int i = 1; i <= l; i++) {
        if (bin[i]) ss << s[i-1];
    }
    result.pb(ss.str());
}

void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        bin[i] = j;
        if (i == l) update();
        else if (i < l) Try(i+1);
    }
}

void print() {
    sort(result.begin(), result.end());
    for (string s : result) cout << s << " ";
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> l >> s;
        Try(1);
        print();
        result.clear();
        bin.reset();
    }
    return 0;
}