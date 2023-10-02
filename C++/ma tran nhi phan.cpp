#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int mat[100][3];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> mat[i][0] >> mat[i][1] >> mat[i][2];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int count1 = 0, count0 = 0;
        if (mat[i][0])
        {
            count1++;
        }
        else
        {
            count0++;
        }
        if (mat[i][1])
        {
            count1++;
        }
        else
        {
            count0++;
        }
        if (mat[i][2])
        {
            count1++;
        }
        else
        {
            count0++;
        }
        if (count1 > count0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}