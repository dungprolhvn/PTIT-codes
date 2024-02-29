#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


string prefixToInfix(string exp) {
    const string ops = "+-/*^";
    string infix = "(";
    stack<string> st;
    string temp, a, b;
    for (auto it = exp.rbegin(); it != exp.rend(); it++) {
        if (isalpha(*it)) {
            st.push(string(1, *it));
        }
        else {
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            temp = '(' + a + *it + b + ')';
            st.push(temp);
        }
    }
    return st.top();
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string exp;
        cin >> exp;
        cout << prefixToInfix(exp) << endl;
    }
    return 0;
}