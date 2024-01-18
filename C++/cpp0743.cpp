#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t; cin.ignore();
    string line, word;
    while (t--)
    {
        getline(cin, line);
        stack<string> st;
        stringstream ss(line);
        while (ss >> word)
        {
            st.push(word);
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}