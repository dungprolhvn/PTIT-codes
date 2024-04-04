#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int n, s;
int cash[100];
bool found = false;

void Try(int i, int currVal = 0, int count = 0) {
    if (found) return;
    if (currVal > s) return;
    if (currVal == s) {
        cout << count << endl;
        found = true;
        return;
    }
    for (int j = i; j <= n; j++) Try(j+1, currVal+cash[j], count+1);
}


int main()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> cash[i];
    sort(cash + 1, cash + 1 + n, greater<int>());
    Try(1);
    if (!found) cout << -1 << endl;
    return 0;
}