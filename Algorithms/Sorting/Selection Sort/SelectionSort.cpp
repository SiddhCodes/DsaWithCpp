// Selection Sort Algorithm
// Selection sort is a sorting algorithm that selects the smallest element from an unsorted
// list in each iteration and places that element at the beginning of the unsorted list.

// Working of Selection Sort
// 1) Set the first element as minimum.
// 2) Compare minimum with the second element. If the second element is smaller than minimum, assign the second element as minimum.
// 3) After each iteration, minimum is placed in the front of the unsorted list
// 4) For each iteration, indexing starts from the first unsorted element. Step 1 to 3 are repeated until all the elements are placed at their correct positions.

// Time Complexity => O(n2)
// Space Complexity => O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {19, 18, 17, 16, 91, 92, 93, 94, 55};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    for (int a : arr) {
        cout << a << " ";
    }

    return 0;
}
