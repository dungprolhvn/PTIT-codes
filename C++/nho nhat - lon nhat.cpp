#include <bits/stdc++.h>
using namespace std;

void solve(int m, int s)
{
    if (s == 0)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    string maxNum = "", minNum = "";
    int count = 0;
    int digit;
    while (count < m)
    {
        digit = min(9, s);
        maxNum += to_string(digit);
        s -= digit;
        count++;
    }
    if (s > 0)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    minNum = maxNum;
    reverse(minNum.begin(), minNum.end());
    if (minNum[0] == '0')
    {
        minNum[0] = '1';
        int k = 1;
        while (minNum[k] == '0')
        {
            k++;
        }
        minNum[k] -= 1;
    }
    cout << minNum << " " << maxNum << endl;
}

int main()
{
    int m, s;
    cin >> m >> s;
    solve(m, s);
    return 0;
}