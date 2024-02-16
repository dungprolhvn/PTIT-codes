#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int priority(char op) {
    // op : +-*/^
    if (op == '(') return -1;
    if (op == '^') return 2;
    if (op == '/' || op == '*') return 1;
    return 0;
}


string toPostfix(string s) {
    const string ops = "-+/*^";
    char ch;
    stringstream out;
    stack<char> st;
    for (char c : s) {
        if (c=='(') st.push(c);
        else if (c==')') {
            while (!st.empty() && st.top() != '(') {
                out << st.top();
                st.pop();
            }
            st.pop();
        }
        else if (ops.find(c) != -1) {
            // pop higher priority operator
            while (!st.empty() && priority(c) <= priority(st.top())) {
                out << st.top();
                st.pop();
            }
            st.push(c);
        }
        else {
            out << c;
        }
    }
    while (!st.empty()) {
        if (st.top() != '(') out << st.top();
        st.pop();
    }
    return out.str();
}


int main()
{
    int t; cin >> t;
    string exp;
    while (t--)
    {
        cin >> exp;
        cout << toPostfix(exp) << endl;
    }
    return 0;
}