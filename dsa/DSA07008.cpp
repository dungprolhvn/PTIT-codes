#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


short priority(char op) {
    if (op == '^') return 3;
    if (op == '/' || op == '*') return 2;
    if (op == '-' || op == '+') return 1;
    return 0;
}


string infixToPostfix(string exp) {
    const string ops = "-+/*^";
    stringstream ss;
    stack<char> st;
    for (char c : exp) {
        if (c == '(') st.push(c);
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                ss << st.top();
                st.pop();
            }
            st.pop(); // pop openning parenthesis
        }
        else if (ops.find(c) != -1) {
            while (!st.empty() && priority(c) <= priority(st.top())) {
                ss << st.top();
                st.pop();
            }
            st.push(c);
        }
        else {
            ss << c;
        }
    }
    // Push remaining operator out of stack
    while (!st.empty()) {
        if (st.top() != '(') ss << st.top();
        st.pop();
    }
    return ss.str();
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string exp;
        cin >> exp;
        cout << infixToPostfix(exp) << endl;
    }
    return 0;
}