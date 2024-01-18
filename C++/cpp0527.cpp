#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

struct Time {
    int hour, minute, second;
};

bool cmp(const Time a, const Time b)
{
    if (a.hour == b.hour)
    {
        if (a.minute == b.minute) 
        {
            return a.second < b.second;
        }
        else
        {
            return a.minute < b.minute;
        }
    }
    else
    {
        return a.hour < b.hour;
    }
}

int main()
{   
    int n;
    vector<Time> v;
    cin >> n;
    Time tmp;
    for (int i  = 0; i < n; i++)
    {
        cin >> tmp.hour >> tmp.minute >> tmp.second;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->hour << " " << it->minute << " " << it->second << endl;
    }
    return 0;
}