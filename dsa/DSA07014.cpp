#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


int calc(string exp) {
    stack<double> st;
    for (auto it = exp.rbegin(); it != exp.rend(); it++) {
        if (isdigit(*it)) st.push((double) (*it - '0'));
        else {
            double a = st.top(); st.pop();
            double b = st.top(); st.pop();
            switch(*it) {
                case '+':
                    st.push(a+b);
                    break;
                case '-':
                    st.push(a-b);
                    break;
                case '*':
                    st.push(a*b);
                    break;
                case '/':
                    st.push(a/b);
                    break;
            }
        }
    }
    return (int) st.top();
}


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string exp;
        cin >> exp;
        cout << calc(exp) << endl;
    }
    return 0;
}