#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t, n; cin >> t;
    string tmp;
    while (t--)
    {
        cin >> n;
        queue<string> q;
        q.push("1");
        int i = 0;
        while (i < n) {
            tmp = q.front();
            q.pop();
            cout << tmp << " ";
            q.push(tmp+"0");
            q.push(tmp+"1");
            i++;
        }
        cout << endl;
    }
    return 0;
}