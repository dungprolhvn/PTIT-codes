#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int sumDigit(string d)
{
    int rs = 0;
    for (int i = 0; i < d.length(); i++)
    {
        rs += (d[i] - '0');
    }
    return rs;
}

ll calc(string n) 
{
    ll result = 0;
    // if the last 3 number is divisible by 8, the num is divisible by 8
    int l = n.length();
    for (int i = 0; i < l; i++)
    {
        if (n[i] == '8') result++;
    }
    for (int i = 0; i < l - 1; i++)
    {
        int digit = n[i] - '0', digit2 =  n[i + 1] - '0';
        if ((digit + digit2) % 3 != 0 && (digit*2+digit2) % 8 == 0) result++;
    }
    for (int i = l - 1; i >= 2; i--)
    {
        string tmp = n.substr(i - 2, 3);
        
        if (stoi(tmp) % 8 == 0)
        {
            int sumD = sumDigit(tmp);
            if (sumD % 3 != 0) result++;
            for (int j = i - 3; j >= 0; j--)
            {
                sumD += (n[j] - '0');
                tmp = n[j] + tmp;
                if (sumD % 3 != 0) result++;
            }
        }
    }
    return result;
}

int main()
{
    int t; cin >> t; cin.ignore();
    string num;
    while (t--)
    {
        cin >> num;
        cout << calc(num) << endl;
    }
    return 0;
}