#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


string ngoacDung(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) return "NO\n";
            if (c == ')') {
                if (st.top() != '(') return "NO\n";
                else st.pop();
            }
            else if (c == '}') {
                if (st.top() != '{') return "NO\n";
                else st.pop();
            }
            else if (c == ']') {
                if (st.top() != '[') return "NO\n";
                else st.pop();
            }
        }
    }
    return "YES\n";
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << ngoacDung(s);
    }
    return 0;
}