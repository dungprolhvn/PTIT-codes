#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int check(string s, int k)
{
    int rs = 0;
    int l = s.length();
    set<char> st;
    for (int i = 0; i < l; i++)
    {
        st.clear();
        for (int j = i; j < l; j++)
        {
            st.insert(s[j]);
            if (st.size() == k)
            {
                rs++;
            }
            else if (st.size() > k)
            {
                break;
            }
        }
    }
    return rs;
}

int main()
{
    int t;
    cin >> t;
    string s;
    int k;
    while (t--)
    {
        cin >> s >> k;
        cout << check(s, k) << endl;
    }
    return 0;
}