#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

string toInfix(string postfix) {
    string ops = "+-*/";
    stack<string> st;
    for (char c : postfix) {
        if (ops.find(c) != -1) {
            string s2 = st.top();
            st.pop();
            string s1 = st.top();
            st.pop();
            string tmp = "(" + s1 + c + s2 + ")";
            st.push(tmp);
        }
        else st.push(string(1, c));
    }
    return st.top();
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string postfix;
        cin >> postfix;
        cout << toInfix(postfix) << endl;
    }
    return 0;
}