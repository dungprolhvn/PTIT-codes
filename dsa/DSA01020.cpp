#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


string prev(string bin) {
    int j = bin.length() - 1;
    while (bin[j] == '0') {
        bin[j] = '1';
        j--;
    }
    if (j < 0) {
        for (int i = 0; i < bin.length(); i++) {
            bin[i] = '1';
        }
        return bin;
    }
    bin[j] = '0';
    return bin;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string bin;
        cin >> bin;
        cout << prev(bin) << endl;
    }
    return 0;
}