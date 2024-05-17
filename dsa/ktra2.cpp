#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool correct(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '[' || c == '(') st.push(c);
        else if (c == ']') {
            if (!st.empty() && st.top() == '[') st.pop();
            else return false;
        }
        else if (c == ')') {
            if (!st.empty() && st.top() == '(') st.pop();
            else return false;
        }
    }
    return st.empty();
}

int main()
{
    int t; cin >> t; cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s, '.');
        if (correct(s)) cout << "YES\n";
        else cout << "NO\n";
    }   
    return 0;
}

