#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    int n;
    short int tmp;
    while (t--)
    {
        cin >> n;
        int c0 = 0, c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            switch (tmp)
            {
                case 0:
                    c0++;
                    break;
                case 1:
                    c1++;
                    break;
                case 2:
                    c2++;
                    break;
            }
        }
        for (int i = 0; i < c0; i++)
        {
            cout << 0 << " ";
        }
        for (int i = 0; i < c1; i++)
        {
            cout << 1 << " ";
        }
        for (int i = 0; i < c2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    return 0;
}