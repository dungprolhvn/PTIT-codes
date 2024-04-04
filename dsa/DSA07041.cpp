#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int calc(string exp) {
    stack<char> st;
    int sum = 0;
    for (char c : exp) {
        if (c == '(') st.push(c);
        else {
            if (!st.empty() && st.top() == '(') {
                st.pop();
                sum += 2;
            }
        }
    }
    return sum;
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