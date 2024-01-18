#include <bits/stdc++.h>

using namespace std;

string nextBin(string bin) {
    string result = bin;
    int l = bin.length();
    int i = l - 1;
    while (bin[i] != '0') {
        i--;
    }
    if (i < 0) {
        for (int i = 0; i < l; i++) result[i] = '0';
        return result;
    }
    result[i] = '1';
    for (int j = i + 1; j < l; j++) {
        result[i] = '0';
    }
    return result;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        string bin;
        cin >> bin;
        cout << nextBin(bin) << endl;
    }
}