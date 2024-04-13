#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

string decoded(string s) {
    string str, num, tmp;
    stack<char> st; 
    for (char c : s) {
        if (c == ']') {
            // pop str
            str = num = tmp = "";
            while (!st.empty() && st.top() != '[') {
                str += st.top();
                st.pop();
            }
            // pop [
            if (!st.empty()) st.pop();
            // pop num 
            while (!st.empty() && isdigit(st.top())) {
                num = st.top() + num;
                st.pop();
            }
            if (num == "") num = "1";
            
            int n = stoi(num);
            while (n--) tmp += str;
            for (int j = tmp.size() - 1; j >= 0; j--) st.push(tmp[j]);
        }
        else {
            st.push(c);
        }
    }
    string rs = "";
    while (!st.empty()) {
        rs = st.top() + rs;
        st.pop();
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
        cout << decoded(s) << endl;
    }
    return 0;
}