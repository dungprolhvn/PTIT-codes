#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void unionn(vector<int> a, vector<int> b)
{
    int i = 0, j = 0;
    int n = a.size(), m = b.size();
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++, ++j;
        }
    }
    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }
    cout << endl;
}

void intersection(vector<int> a, vector<int> b)
{
    int i = 0, j = 0;
    int n = a.size(), m = b.size();
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++, ++j;
        }
    }
    cout << endl;
}


int main()
{
    int t; cin >> t;
    int n, m, tmp;
    while (t--)
    {
        cin >> n >> m;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> tmp;
            b.push_back(tmp);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        unionn(a, b);
        intersection(a, b);
    }
    return 0;
}