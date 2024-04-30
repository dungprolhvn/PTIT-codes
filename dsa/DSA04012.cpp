#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;


vector<int> add(vector<int> a, vector<int> b) {
    // add two vector
    vector<int> result(max(a.size(), b.size()), 0);
    for (int i = 0; i < a.size(); i++) result[i] += a[i];
    for (int i = 0; i < b.size(); i++) result[i] += b[i];
    return result;
}

vector<int> subtract(vector<int> a, vector<int> b) {
    // subtract vector b from vector a 
    vector<int> result(max(a.size(), b.size()), 0);
    for (int i = 0; i < a.size(); i++) result[i] += a[i];
    for (int i = 0; i < b.size(); i++) result[i] -= b[i];
    return result;
}

vector<int> multiply(const vector<int>& a, const vector<int>& b) {
    // multiply two vector using Karatsuba algorithm
    if (a.empty() || b.empty()) return vector<int>();
    if (a.size() == 1 && b.size() == 1) return vector<int>{a[0]*b[0]};
    int n = max(a.size(), b.size());
    int half = (n + 1) / 2;
    vector<int> a0(a.begin(), a.begin() + min(half, (int) a.size()));
    vector<int> a1(a.begin() + min(half, (int) a.size()), a.end());
    vector<int> b0(b.begin(), b.begin() + min(half, (int) b.size()));
    vector<int> b1(b.begin() + min(half, (int) b.size()), b.end());
    // calculate
    vector<int> a1b1 = multiply(a1, b1);
    vector<int> a0b0 = multiply(a0, b0);
    vector<int> a0a1_b0b1 = multiply(add(a0, a1), add(b0, b1));

    vector<int> middle = subtract(a0a1_b0b1, add(a0b0, a1b1));
    middle.insert(middle.begin(), half, 0);
    a1b1.insert(a1b1.begin(), 2*half, 0);
    
    return add(a0b0, add(middle, a1b1));
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin  >> b[i];
        vector<int> rs = multiply(a, b);
        for (int i = 0; i < n + m - 1; i++) cout << rs[i] << " ";
        cout << endl;
    }
    return 0;
}