// Problem Statement
// Given a non-empty integer array nums, return its largest element.

// Brute Force Approach
// Sorting the values in non-decreasing order places the largest element at the final position.
// A copy of the input array is sorted so that the original arrangement remains unchanged. The final value of the sorted copy is then returned.

// Algorithm
// Create sortedNums as a copy of nums so the original ordering of the input remains unchanged.
// Sort sortedNums in non-decreasing order, which places the largest value at the last position.
// Return the last element of sortedNums, since no element after sorting can be greater than it.

// Complexity analysis
// Time Complexity: \(O(n\log n)\) — sorting the array takes \(O(n\log n)\) time.
// Space Complexity: \(O(n)\) — copying the original array requires additional space.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {19, 5, 27, 12, 8};

    vector<int> sortedNums = nums;

    sort(sortedNums.begin(), sortedNums.end());

    int largest = sortedNums.back();

    cout << "Largest element: " << largest << endl;

    return 0;
}