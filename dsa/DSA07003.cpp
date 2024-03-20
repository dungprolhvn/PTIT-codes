#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool check(string s) {
    // return true if there are redundant parenthesis
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') { 
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            if (st.top() == '(') {;
                return true;
            }
            while (!st.empty() && st.top() != '(') st.pop();
            st.pop();
        }        
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            st.push(s[i]);
        }
    }
    return false;
}


int main()
{
    int t; cin >> t; cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (check(s)) {
            cout << "Yes\n";
        }
        else cout << "No\n";
    }
    return 0;
}