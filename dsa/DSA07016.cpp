#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

string decoded(string s) {
    stack<char> st;
    string result = "";
    char m = '1';
    for (char c : s) {
        st.push(m);
        if (c == 'I') {
            while (!st.empty()) {
                result += st.top();
                st.pop();
            }
        }
        m++;
    }
    st.push(m);
    while (!st.empty()) { 
        result += st.top();
        st.pop(); 
    }
    return result;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << decoded(s) << endl;
    }
    return 0;
}