#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

string toPostfix(string prefix) {
    stack<string> st;
    for (int i = prefix.length() - 1; i >= 0; i--) {
        string tmp = "";
        tmp += prefix[i];
        if (isalpha(prefix[i])) {
            st.push(tmp);
        }
        else {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            st.push(s1 + s2 + tmp);
        }
    }
    return st.top();
} 

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << toPostfix(s) << endl;
    }
    return 0;
}