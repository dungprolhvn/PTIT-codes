#include <bits/stdc++.h>
using namespace std;

// map_key each letter with corresponding numeric value 
short int map_key[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};

bool isPalinlist(int *arr, int len)
{
    int i = 0, j = len - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        i++, --j;
    }
    return true;
}

main()
{
    int t; cin >> t;
    string msg;
    while (t--)
    {
        cin >> msg;
        // uppercase the input string
        for (int i = 0, l = msg.length(); i < l; i++)
        {
            msg[i] = toupper(msg[i]);
        }
        int *list = new int[msg.length()];
        for (int i = 0, l = msg.length(); i < l; i++)
        {
            list[i] = map_key[msg[i] - 'A'];
        }
        if (isPalinlist(list, msg.length()))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}