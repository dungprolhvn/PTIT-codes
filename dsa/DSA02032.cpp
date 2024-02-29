#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ll;

using namespace std;

int n, k;
vector<int> v;
vector<int> c;
bool exist;
vector<string> result;


void update()
{
    stringstream ss;
    ss << "{";
    for (int i = 0; i < c.size() - 1; i++)
        ss << c[i] << " ";
    ss << c.back() << "}";
    result.pb(ss.str());
}


void quaylui(int value)
{
    for (int num : v)
    {
        if ((c.empty() || num >= c.back()) && num <= value)
        {
            c.pb(num);
            value -= num;
            if (value == 0)
            {
                exist = 1;
                update();
            }
            else if (value > 0)
            {
                quaylui(value);
            }
            value += num;
            c.pop_back();
        }
    }
}


void print() {
    cout << result.size() << " ";
    for (string s : result) {
        cout << s << " ";
    }
}


int main()
{
    int t, tmp;
    cin >> t;
    while (t--)
    {
        exist = 0;
        result.clear();
        v.clear();
        c.clear();
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            v.pb(tmp);
        }
        sort(v.begin(), v.end());
        quaylui(k);
        if (!exist)
            cout << -1;
        else print();
        cout << endl;
    }
    return 0;
}