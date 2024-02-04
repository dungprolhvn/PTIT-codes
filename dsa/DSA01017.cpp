#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


string binaryToGray(string binary) {
    string gray = binary;
    int i = 1;
    while (i < binary.length()) {
        if (binary[i] != binary[i - 1]) {
            gray[i] = '1';
        }
        else {
            gray[i] = '0';
        }
        i++;
    }
    return gray;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string bin;
        cin >> bin;
        cout << binaryToGray(bin) << endl;
    }
    return 0;
}