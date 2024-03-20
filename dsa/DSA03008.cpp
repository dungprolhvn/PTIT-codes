#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<pair<int, int>> cv(n);
        for (int i = 0; i < n; i++) cin >> cv[i].first;
        for (int i = 0; i < n; i++) cin >> cv[i].second;
        sort(cv.begin(),cv.end(), comp);
        int last = -1;
        int c = 0;
        for (auto p : cv) {
            if (p.first >= last) {
                c++;
                last = p.second;
            }
        }
        cout << c << endl;
    }
}