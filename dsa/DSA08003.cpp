#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

const string queries[] = {"PUSHFRONT", "PRINTFRONT", "POPFRONT", "PUSHBACK", "PRINTBACK", "POPBACK"};

int findQuery(string q) {
    for (int i = 0; i < 6; i++) {
        if (queries[i] == q) return i;
    }
    return -1;
}

int main()
{
    
    deque<short> dq;
    string q; int n;
    int t; cin >> t;
    while (t--)
    {
        cin >> q;
        int i = findQuery(q);
        switch (i) {
            case 0:
                cin >> n;
                dq.push_front(n);
                break;
            case 1:
                if (!dq.empty()) cout << dq.front() << endl;
                else cout <<"NONE\n";
                break;
            case 2:
                if (!dq.empty()) dq.pop_front();
                break;
            case 3:
                cin >> n;
                dq.pb(n);
                break;
            case 4:
                if (!dq.empty()) cout << dq.back() << endl;
                else cout <<"NONE\n";
                break;
            case 5:
                if (!dq.empty()) dq.pop_back();
                break;
        }
    }
    return 0;
}