#include<bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

class DoanhNghiep {
    string symbol;
    string name;
    int max;

    public:
        void input() {
            cin >> symbol; cin.ignore();
            getline(cin, name);
            cin >> max;
        }
        void output() {
            cout << symbol << " " << name << " " << max << endl;
        }
        int getMaxSv() const {
            return this->max;
        }
        string getSymbol() const {
            return this->symbol;
        }
};

bool cmpDn(const DoanhNghiep a, const DoanhNghiep b) 
{
    if (a.getMaxSv() != b.getMaxSv())
    {
        return a.getMaxSv() > b.getMaxSv();
    }
    return a.getSymbol() < b.getSymbol();
}

int main()
{
    int n;
    cin >> n;
    DoanhNghiep* list = new DoanhNghiep[n];
    for (int i = 0; i < n; i++)
    {
        list[i].input();
    }
    sort(list, list+n, cmpDn);
    for (int i = 0;i < n; i++)
    {
        list[i].output();
    }
    return 0;
}