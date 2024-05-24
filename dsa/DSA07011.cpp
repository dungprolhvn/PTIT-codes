#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

string toPrefix(string postfix) {
    stack<string> st;
    for (char c : postfix) {
        if (isalpha(c)) st.push(string(1, c));
        else {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push(c + b + a);
        }
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
        cout << toPrefix(postfix) << endl;
    }
    return 0;
}