#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    string s;   
    while (t--)
    {
        
        getline(cin, s);
        stringstream ss(s);
        int tmp;
        int count = 0;
        int odd = 0;
        int even = 0;
        while (ss >> tmp)
        {
            //cout << tmp << endl;
            count++;
            if (tmp & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (count % 2 == 0 && even > odd)
        {
            cout << "Yes\n";
        }
        else if (count % 2 == 1 && odd > even)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        
    }
    return 0;
}