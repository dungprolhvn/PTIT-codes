#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

char c;
short n;
bitset<10> chosen;
vector<char> xauKt;

bool isVowel(char c)
{
    return c == 'A' || c == 'E';
}

void inKq()
{
    for (int i = 1; i <= n - 1; i++)
    {
        if (isVowel(xauKt[i]) && !isVowel(xauKt[i - 1]) && !isVowel(xauKt[i + 1]))
        {
            // printf("returned because %c is between %c and %c at position %d\n", xauKt[i], xauKt[i-1], xauKt[i+1], i);
            return;
        }
    }
    for (char c : xauKt)
        cout << c;
    cout << endl;
}

void Try(int i)
{
    // chon vi tri thu i
    for (int j = 'A' - 'A'; j <= c - 'A'; j++)
    {
        if (!chosen[j])
        {
            chosen[j] = 1;
            xauKt.pb(j + 'A');
            if (i == n)
            {
                inKq();
            }
            else
            {
                Try(i + 1);
            }
            chosen[j] = 0;
            xauKt.pop_back();
        }
    }
}

int main()
{
    cin >> c;
    n = c - 'A';
    Try(0);
    return 0;
}