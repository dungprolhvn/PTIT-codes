#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int lcp(string s) {
    // tra ve day ngoac dung dai nhat cua s
    stack<int> st;
    int rs = 0, curr = 0, last = 0;
    int lastIdx = -1; // index of last unmatched closing parenthesis
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        }
        else {
            if (st.empty()) lastIdx = i;
            else {
                st.pop(); 
                if (st.empty()) rs = max(rs, i - lastIdx);
                else rs = max(rs, i - st.top());
            }
        }
    }
    return rs;
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << lcp(s) << endl;
    }
    return 0;
}