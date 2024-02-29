#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    queue<short> kiu;
    string q; short n;
    int t; cin >> t;
    while (t--)
    {
        cin >> q;
        if (q == "PUSH") {
            cin >> n;
            kiu.push(n);
        }
        else if (q == "POP") {
            if (!kiu.empty()) kiu.pop();
        }
        else {
            if (kiu.empty()) cout << "NONE\n";
            else cout << kiu.front() << endl;
        }
    }
    return 0;
}