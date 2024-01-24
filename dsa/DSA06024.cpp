#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min) {
                min = arr[j];
                idx = j;
            }
        }
        swap(arr[i], arr[idx]);
        printf("Buoc %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}