#include <bits/stdc++.h>

using namespace std;

string enkoded(string text)
{
    string rs = "";
    char count = '1';
    for (int i = 1, l = text.length(); i < l; i++)
    {
        if (text[i] != text[i - 1])
        {
            rs += text[i - 1];
            rs += count;
            count = '1';
        }
        else
        {
            count++;
        }
    }
    rs += text[text.length() - 1];
    rs += count;
    return rs;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string text;
        cin >> text;
        cout << enkoded(text) << endl;
    }
    return 0;
}