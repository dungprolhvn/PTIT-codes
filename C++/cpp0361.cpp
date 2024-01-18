#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int t = n;
    string tmp;
    vector<string> v;
    while (t--)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    ll rs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && v[i].find(v[j]) != string::npos)
            {
                rs++;
            }
        }
    }
    cout << rs << endl;
    return 0;
}