#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

const int n = 3;
string year = "000";

vector<string> y;

void Try(int i)
{
    //cout << "Try " << i << endl;
    if (i == n) {
        y.push_back("2" + year);
        return;
    }
    for (int j = 0; j <= 2; j+=2) {
        year[i] = (char) (j + '0');
        Try(i + 1);
    }
}


int main()
{
    Try(0);
    for (int i = 0; i < y.size(); i++) 
    {
        cout << "02/02/" + y[i] << endl;
    }
    for (int i = 0; i < y.size(); i++)
    {
        cout << "20/02/" + y[i] << endl;
    }
    for (int i = 0; i < y.size(); i++)
    {
        cout << "22/02/" + y[i] << endl;
    }
    return 0;
}