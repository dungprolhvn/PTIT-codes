#include <bits/stdc++.h>

using namespace std;

void unionn(vector<int> a, vector<int> b, int n, int m)
{
    // Print union of two array a and b in a line
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i++] << " ";
        }
        else if (a[i] > b[j])
        {
            cout << b[j++] << " ";
        }
        else
        {
            cout << a[i] << " ";
            i++, ++j;
        }
    }
    while (i < n)
    {
        cout << a[i++] << " ";
    }
    while (j < m)
    {
        cout << b[j++] << " ";
    }
    cout << endl;
}

void intersectt(vector<int> a, vector<int> b, int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            cout << a[i] << " ";
            i++, j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
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
        set<char> se;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (char c : s)
            {
                se.insert(c);
            }
        }
        for (char c : se)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}