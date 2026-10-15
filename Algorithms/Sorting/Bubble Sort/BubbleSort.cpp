// Bubble Sort
// Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are in the intended order.
// Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort.

// Working of Bubble Sort
// Suppose we are trying to sort the elements in ascending order.

// 1. First Iteration (Compare and Swap)
// Starting from the first index, compare the first and the second elements.
// If the first element is greater than the second element, they are swapped.
// Now, compare the second and the third elements. Swap them if they are not in order.
// The above process goes on until the last element.

// 2. Remaining Iteration
// The same process goes on for the remaining iterations.
// After each iteration, the largest element among the unsorted elements is placed at the end.

// In each iteration, the comparison takes place up to the last unsorted element.
// The array is sorted when all the unsorted elements are placed at their correct positions.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, 3, 8, 1, 2};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
