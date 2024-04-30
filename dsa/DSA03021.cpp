#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

bool check(vector<int> v, int num) {
    for (int n : v) {
        if (n / num == n / (num + 1)) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int minE = *min_element(a.begin(), a.end());
    vector<int> b(a);
    for (int i = minE; i > 0; i--) {
        if (check(a, i)) {
            for (int j = 0; j < n; j++) {
                b[j] = a[j] / (i + 1) + 1;
            }
            break;
        }
    }
    cout << accumulate(b.begin(), b.end(),   0) << endl;   
    return 0;
}