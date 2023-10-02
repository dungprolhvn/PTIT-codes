#include <iostream>
#include <unordered_map>
using namespace std;

int findDup(int *arr, int l)
{
    
    unordered_map<int, int> freq;
    for (int i = 0; i < l; i++)
    {
        freq[arr[i]]++;
    }
    int rs = 0;
    for (auto it : freq)
    {
        if (it.second > 1)
        {
            rs += it.second;
        }
    }
    
    return rs;
}
int main()
{
    int t, n; cin >> t;
    while (t--)
    {
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findDup(arr, n) << endl;
        delete[] arr;
    }
    return 0;
}

