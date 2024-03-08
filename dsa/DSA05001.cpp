#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int main()
{
    // maxLength[i][j]: do dai xau con chung dai nhat tinh den a[i] , b[j]
    int t; cin >> t;
    string a, b;
    while (t--)
    {
        cin >> a >> b;
        int l1 = a.length(), l2 = b.length();
        vector<vector<int>> maxLength(l1+5, vector<int>(l2+5, 0));
        for (int i = 1; i <= l1; i++) {
            for (int j = 1; j <= l2; j++) {
                if (a[i-1] == b[j-1]) {
                    maxLength[i][j] = maxLength[i-1][j-1]+1;
                }
                else {
                    maxLength[i][j] = max(maxLength[i-1][j], maxLength[i][j-1]);
                }
            }
        }
        cout << maxLength[l1][l2] << endl;
    }
    return 0;
}