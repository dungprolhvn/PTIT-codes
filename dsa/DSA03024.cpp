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
        for (int i = 0; i < n; i++) cin >> cv[i].first >> cv[i].second;
        sort(cv.begin(), cv.end(), comp);
        int last = INT_MIN;
        int c = 0;
        for (pair<int, int> p : cv) {
            if (p.first >= last) {
                c++;
                last = p.second;
            }
        }
        cout << c << endl;
    }
}