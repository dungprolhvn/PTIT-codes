#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define sec second
typedef unsigned long long ll;

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}


int solve(int n) {
    unordered_map<int, bool> m;
    queue<pair<int, int>> q;
    q.push({n, 0});
    m[n] = true;
    while (!q.empty()) {
        pair<int, int> tmp = q.front();
        if (tmp.fst == 1) return tmp.sec;
        q.pop();
        if (!m[tmp.fst - 1]) {
            q.push({tmp.fst - 1, tmp.sec + 1});
            m[tmp.fst - 1] = true;
        }
        // cout << tmp.fst - 1 << endl;
        // 
        if (!isPrime(tmp.fst)) {
            for (int i = sqrt(tmp.fst); i < tmp.fst; i++) {
                if (!m[i] && tmp.fst % i == 0) {
                    q.push({i, tmp.sec + 1});
                    m[i] = true;
                    // cout << i << "-" << endl;
                    break;
                }
            }
        }
    }
    return -1;
}

int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}