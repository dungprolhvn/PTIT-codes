#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;
vector<vector<int>> result;
vector<int> sub;

const int MAX_SUM = 1500;
bitset<MAX_SUM> isPrime;
void sieve() {
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i*i <= MAX_SUM; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j <= MAX_SUM; j += i) {
                isPrime[j] = 0;
            }
        }
    }
}


void Try(int i, int n, vector<int>& v, int currSum) {
    if (isPrime[currSum]) result.pb(sub);
    if (i < n) {
        for (int j = n - 1; j >= i; j--) {
            sub.push_back(v[j]);
            Try(j + 1, n, v, currSum + v[j]);
            sub.pop_back();
        }
    }
}

int main()
{
    sieve();
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        Try(0, n, v, 0);
        //sort(result.begin(), result.end());
        for (auto tmp : result) {
            for (int i : tmp) cout << i << ' ';
            cout << endl;
        }
        result.clear();
        sub.clear();
    }
    return 0;
}