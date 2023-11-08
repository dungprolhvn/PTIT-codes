#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

struct Person {
    char name[15];
    int d, m, y;
    
};

void getPerson(Person *p)
{
    cin >> p->name;
    string tmp;
    cin >> tmp;
    p->d = stoi(tmp.substr(0, 2));
    p->m = stoi(tmp.substr(3, 5));
    p->y = stoi(tmp.substr(6, 10));

}

bool cmpDate(const Person &a, const Person &b)
{
    if (a.y != b.y)
    {
        return (a.y < b.y);
    }
    if (a.m != b.m)
    {
        return (a.m < b.m);
    }
    return a.d < b.d;
}

int main()
{
    int n;
    cin >> n; cin.ignore();
    vector<Person> v;
    Person tmp;
    for (int i = 0; i < n; i++)
    {
        getPerson(&tmp);
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmpDate);
    cout << v[n - 1].name << endl << v[0].name;
    return 0;
}