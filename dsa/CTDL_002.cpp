#include <bits/stdc++.h>



int count = 0; // counter subarray

void findSubarrays(int* arr, int n, int k, std::vector<int>& v, int i) {
    if (k == 0) {
        std::sort(v.begin(), v.end());
        for (int i : v) {
            std::cout << i << " ";
        }
        count++;
        std::cout << std::endl;
        return;
    }
    for (int j = i; j < n; j++) {
        if (k - arr[j] >= 0) {
            v.push_back(arr[j]);
            findSubarrays(arr, n, k - arr[j], v, j+1);
            v.pop_back(); // backtrack
        }
    }
}


int main() {
    int n, k;
    std::cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::sort(arr, arr+n, std::greater<int>());
    std::vector<int> v;
    findSubarrays(arr, n, k, v, 0);
    std::cout << count << std::endl;
    return 0;
}