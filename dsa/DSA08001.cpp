#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        queue<int> q;
        int n, qr, x;
        cin >> n;
        while (n--) {
            cin >> qr;
            switch (qr) {
                case 1:
                    cout << q.size() << endl;
                    break;
                case 2:
                    if (q.empty()) cout << "YES\n";
                    else cout << "NO\n";
                    break;
                case 3:
                    cin >> x;
                    q.push(x);
                    break;
                case 4:
                    if (!q.empty()) q.pop();
                    break;
                case 5:
                    if (q.empty()) cout << "-1\n";
                    else cout << q.front() << endl;
                    break;
                case 6:
                    if (q.empty()) cout << "-1\n";
                    else cout << q.back() << endl;
                    break;
            }
        }
    }
    return 0;
}