#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    stack<short> st;
    string q; short n;
    while (t--)
    {
        cin >> q;
        if (q == "PRINT") {
            if (!st.empty()) cout << st.top() << endl;
            else cout << "NONE\n";
        }
        else if (q == "POP") {
            if (!st.empty()) st.pop();
        }
        else {
            cin >> n;
            st.push(n);
        }
    }
    return 0;
}