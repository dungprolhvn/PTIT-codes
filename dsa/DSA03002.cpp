#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

void calc(string a, string b) {
    string aa = a, bb = b;
    replace(aa.begin(), aa.end(), '6', '5');
    replace(bb.begin(), bb.end(), '6', '5');
    cout << stoi(aa) + stoi(bb) << " ";
    replace(aa.begin(), aa.end(), '5', '6');
    replace(bb.begin(), bb.end(), '5', '6');
    cout << stoi(aa) + stoi(bb) << endl;
}


int main()
{
    string a, b;
    cin >> a >> b;
    calc(a, b);
    return 0;
}