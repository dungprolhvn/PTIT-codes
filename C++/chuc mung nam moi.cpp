#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    cin.ignore();
    set<string> ss;
    string tmp;
    for (int i = 0; i < n; i++)
    {
        getline(cin, tmp);
        ss.insert(tmp);
    }
    
    cout << ss.size() << endl;
    return 0;
}