#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    for (int left = 0; left < n / 2; left++) {
        int right = n - 1 - left;

        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}