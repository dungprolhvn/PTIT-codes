#include<bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    ifstream in("PTIT.in");
    int num;
    int check[1000] = {0};
    while (in >> num)
    {
        check[num]++;
    }
    for (int i = 0; i < 1000; i++)
    {
        if (check[i])
        {
            cout << i << " " << check[i] << endl;
        }
    }
    in.close();
    return 0;
}