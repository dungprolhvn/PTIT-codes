#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int main()
{
    ifstream input("DATA.in", ios::in);
    string buffer;
    ll output = 0;
    while (input >> buffer)
    {
        try
        {
            int number = stoi(buffer);
            output += number;
        }
        catch (const invalid_argument& ia)
        {
            continue;
        }
        catch (const out_of_range& oor)
        {
            continue;
        }
    }
    cout << output << endl;
    input.close();
    return 0;
}