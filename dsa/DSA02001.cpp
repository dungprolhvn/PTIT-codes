#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, tmp;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        while (n) {
            cout << "[";
            for (int i = 0; i < n; i++) {
                if (i == n - 1) {
                    cout << v[i];
                }
                else {
                    cout << v[i] << " ";
                }
            }
            for (int i = 0; i < n - 1; i++) {
                v[i] = v[i] + v[i+1];
            }
            cout << "]\n";
            n--;
        }
    }   
    return 0;
}