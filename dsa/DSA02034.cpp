#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int n;
bitset<11> chosen;
vector<char> perm;


void print() {
    for (int i = 0; i < perm.size()-1; i++) {
        if (abs(perm[i]-perm[i+1]) == 1) return;
    }
    for (char num : perm) {
        cout << num;
    }
    cout << endl;
}


void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (!chosen[j]) {
            chosen[j] = 1;
            perm.pb(j+'0');
            if (i == n) {
                print();
            }
            else {
                Try(i+1);
            }
            chosen[j] = 0;
            perm.pop_back();
        }
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        chosen.reset();
        perm.clear();
        cin >> n;
        Try(1);
    }
    return 0;
}