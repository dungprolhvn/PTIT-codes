#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

typedef struct DoanThang {
    int s, e;
} dt;

bool byEndpointOrder(dt a, dt b) {
    return a.e < b.e;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<dt> v(n);
        for (int i = 0; i < n; i++) cin >> v[i].s >> v[i].e;
        sort(v.begin(), v.end(), byEndpointOrder);
        int last = -1;
        int count = 0;
        for (auto l : v) {
            if (l.s >= last) {
                count++;
                last = l.e;
            }
        }
        cout << count << endl;
    }
}