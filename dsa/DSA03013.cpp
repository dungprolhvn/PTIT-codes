#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int check(string s, int d) {
    int l = s.length();
    int freq[300] = {0};
    for (char c : s) freq[c]++;
    int c = (int) ceil(l / (double) d);
    for (int i : freq) {
        if (i > c) return -1;
    }
    return 1;
}



int main()
{
    int t; cin >> t;
    while (t--)
    {
        int d;
        string s;
        cin >> d >> s;
        cout << check(s, d) << endl;
    }
    return 0;
}