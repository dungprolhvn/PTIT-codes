#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


double digitToDouble(char digit) {
    return (double) (digit - '0');
}


int calc(string postfix) {
    stack<double> st;
    double a, b;
    for (int i = 0, l = postfix.length(); i < l; i++) {
        if (isdigit(postfix[i])) {
            st.push(digitToDouble(postfix[i])); 
        }
        else {
            switch (postfix[i]) {
                case '+':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    st.push(b+a);
                    // cout << a << postfix[i] << b << "=" << b + a << endl;
                    break;
                case '-':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    st.push(b-a);
                    // cout << a << postfix[i] << b << "=" << b - a << endl;
                    break;
                case '*':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    st.push(b*a);
                    // cout << a << postfix[i] << b << "=" << b * a << endl;
                    break;
                case '/':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    st.push(b/a);
                    // cout << a << postfix[i] << b << "=" << b / a << endl;
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
        string s;
        cin >> s;
        cout << calc(s) << endl;
    }
    return 0;
}