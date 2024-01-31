#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

vector<string> output;


void addKQ(const string s, const string s1) {
    int l = s.length();
    string result = s;
    for (int i = 0; i <= l; i++) {
        if (s[i] == 'A') continue;
        if (i > 0 && s[i - 1] == 'A') continue;
        result.insert(i, s1);
        output.push_back(result);
        result = s;
    }
}


void genAB(int n, int k) {
    // Init
    string ab = "";
    for (int i = 0; i < n - k; i++) {
        ab += "A";
    }
    string sub = "";
    for (int i = 0; i < k; i++) {
        sub += "A";
    }
    // Loop
    while (true) {
        addKQ(ab, sub);
        int i = n - k - 1;
        while (ab[i] == 'B') {
            ab[i] = 'A';
            i--;
        }
        if (i < 0) break;
        ab[i] = 'B';
    }
}


void inKQ() {
    sort(output.begin(), output.end());
    cout << output.size() << endl;
    for (string s : output) {
        cout << s << endl;
    }
}


int main()
{
    int n, k;
    cin >> n >> k;
    genAB(n, k);
    inKQ();
    return 0;
}