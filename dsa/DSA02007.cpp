#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

void Try(string& src, string& res, int& swapCount, int idx) {
    if (!swapCount) return;
    char maxPossibleDigit = src[idx];
    for (int i = idx; i < src.length(); i++) {
        if (src[i] > maxPossibleDigit) maxPossibleDigit = src[i];
    }
    if (maxPossibleDigit != src[idx]) swapCount--; // swap
    for (int i = src.length() - 1; i >= idx; i--) {
        if (src[i] == maxPossibleDigit) {
            swap(src[i], src[idx]);
            res = max(res, src);
            Try(src, res, swapCount, idx + 1);
            swap(src[i], src[idx]); // backtrack
        }
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int swapCount; string n;
        cin >> swapCount >> n;
        string result = n;
        Try(n, result, swapCount, 0);
        cout << result << endl;
    }
    return 0;
}