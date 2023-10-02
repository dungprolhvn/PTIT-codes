#include <iostream>
#include <vector>
using namespace std;
int sumArr(const int *arr, int l, int r)
{
    int sum = 0;
    for (int i = l - 1; i < r; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int t, n, q;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        int l, r;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (q--)
        {
            cin >> l >> r;
            cout << sumArr(arr, l, r) << endl;
        }
    }
    return 0;
}