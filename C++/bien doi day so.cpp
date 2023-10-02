#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int *arr, int s, int n)
{
    if (s == n)
    {
        return true;
    }
    int i = s, j = n;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        ++i, --j;
    }
    return true;
}
int calc(int *arr, int n)
{
    if (isPalindrome(arr, 0, n - 1))
    {
        return 0;
    }
    int i = 0, j = n - 1;
    int count = 0;
    while (!isPalindrome(arr, i, j))
    {
        if (arr[i] < arr[j])
        {
            arr[i + 1] += arr[i]; // merge
            i++; count++;
        }
        else if (arr[i] > arr[j])
        {
            arr[j - 1] += arr[j]; //merge
            j--; count++;
        }
        else
        {
            ++i, --j;
        }
    }
    return count;
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
        cout << calc(arr, n) << endl;
    }
    return 0;
}