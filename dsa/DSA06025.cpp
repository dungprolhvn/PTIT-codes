#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        printf("Buoc %d: ", i);
        for (int k = 0; k <= i; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    
}