#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void swap(char &a, char &b) {
    char tmp = a;
    a = b;
    b = tmp;
}


string nextPerm(string num) {
    int n = num.length();
    int i = n - 2;
    while (i >= 0 && num[i] >= num[i+1]) i--;
    if (i < 0) return "BIGGEST";
    int j = n - 1;
    while (num[j] <= num[i]) j--;
    swap(num[i], num[j]);
    int l = i + 1, r = n - 1;
    while (l < r) {
        swap(num[l], num[r]);
        ++l, --r;
    }
    return num; 
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << n << " " << nextPerm(s) << endl;
    }
    return 0;
}