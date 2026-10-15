// Linear Search Algorithm

//Given an integer array nums and an integer target, return the first index at which target occurs.
// Return -1 when target is not present in the array.

// Approach
// Traverse the array from left to right and compare each element with target.
// Return the current index as soon as a match is found. If the traversal ends without finding target, return -1.

// Algorithm
// Traverse nums from left to right so that the earliest occurrence of target is checked first.
// Compare the current element nums[index] with target to see whether the required value has been found.
// If both values are equal, return index immediately. Since the traversal starts from index 0, this is guaranteed to be the first occurrence.
// If the current element does not match, continue with the next index and repeat the same check.
// Return -1 after the traversal finishes, as reaching the end means target does not exist in the array.

// Complexity analysis
// Best case: \(O(1)\) — target is the first element.
// Average case: \(O(n)\) — target is somewhere in the middle.
// Worst case: \(O(n)\) — target is last or absent.
// Space complexity: \(O(1)\) — no additional data structure is used.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 3;
    int n = arr.size();

    for (int index = 0; index < n; index++) {
        if (arr[index] == target) {
            cout << "Target found at index: " << index << endl;
            return 0;
        }
    }

    cout << "Target not found" << endl;

    return 0;
}