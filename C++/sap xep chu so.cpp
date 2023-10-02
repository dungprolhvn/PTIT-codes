#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    int n;
    ll tmp;
    while (t--)
    {
        cin >> n;
        int check[10] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            bool cont = false;
            while (tmp)
            {
                check[tmp % 10] = 1;
                tmp /= 10;
            }
            for (int i = 0; i < 10; i++)
            {
                if (check[i] == 0)
                {
                    cont = true;
                }
            }
            if (!cont)
            {
                break;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (check[i])
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}