#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


string grayToBinary(string gray) {
    string binary = gray;
    int i = 1;
    while (i < gray.length()) {
        if (gray[i] == binary[i - 1]) {
            binary[i] = '0';
        }
        else {
            binary[i] = '1';
        }
        i++;
    }
    return binary;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string gray;
        cin >> gray;
        cout << grayToBinary(gray) << endl;
    }
    return 0;
}