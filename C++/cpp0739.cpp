#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

void decode(string code)
{
    int count = 1;
    stack<int> st;
    st.push(1);
    for (int i = 0; i < code.length(); i++)
    {
        count++;
        if (code[i] == 'I')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
        }
        st.push(count);
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    string code;
    while (t--)
    {
        cin >> code;
        decode(code);
    }
    return 0;
}