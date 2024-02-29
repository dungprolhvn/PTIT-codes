#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int solve(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == ')' && !st.empty() && st.top() == '(') {
            st.pop();
        }
        else st.push(c);
    }
    int c1 = 0, c2 = 0;
    while (!st.empty()) {
        if (st.top() == '(') c1++;
        else c2++;
        st.pop();
    }
    return (int) (ceil(c1 / 2.0) + ceil(c2 / 2.0));
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}