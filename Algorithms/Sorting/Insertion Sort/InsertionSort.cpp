// Insertion Sort Algorithm
// Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.
// Insertion sort works similarly as we sort cards in our hand in a card game.
// We assume that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.
// A similar approach is used by insertion sort.

// Working of Insertion Sort
// 1) The first element in the array is assumed to be sorted. Take the second element and store it separately in key.
// Compare key with the first element. If the first element is greater than key, then key is placed in front of the first element.

// 2) Now, the first two elements are sorted.
// Take the third element and compare it with the elements on the left of it. Placed it just behind the element smaller than it. If there is no element smaller than it, then place it at the beginning of the array.

// 3) Similarly, place every unsorted element at its correct position.

// Time Complexity => O(n2)
// Space Complexity => O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9, 5, 1, 4, 3};
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}