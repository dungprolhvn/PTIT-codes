#include <bits/stdc++.h>

using namespace std;

void nextPerm(int *ss, int n)
{
    int i = n - 2;
    while (ss[i] > ss[i+1]) {
        i--;
    }
    if (i < 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    int k = n - 1;
    while (ss[k] < ss[i]) k--;
    //swap ss[i] ss[k]
    int tmp = ss[k];
    ss[k] = ss[i];
    ss[i] = tmp;
    //
    
    for (int j = i+1; j <= (n + i)/2; j++) {
        tmp = ss[j];
        ss[j] = ss[n - j + i];
        ss[n - j + i] = tmp;
    }
    
    // in kq
    for (int i = 0; i < n; i++)
    {
        cout << ss[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *subset = new int[n];
        for (int i = 0; i < n; i++)
            cin >> subset[i];
        nextPerm(subset, n);
    }
}