#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;


void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}


int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
        printf("Buoc %d: ", i+1);
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}