// Problem Statement
// Given an integer array nums, return the second largest distinct element in the array.
// The answer must be strictly smaller than the largest element. Return -1 if fewer than two distinct values exist.

// Brute Force Approach
// Sorting arranges the values in non-decreasing order, placing the largest value at the final index.
// The positions before the largest may contain duplicate copies of the same value. Moving backward and skipping those duplicates reveals the first value strictly smaller than the largest, which is the second-largest distinct element.

// Algorithm
// Store the array size in n. If n < 2, return -1 because two distinct values cannot exist.
// Create sortedNums as a copy of nums so that sorting does not change the original array.
// Sort sortedNums in non-decreasing order and take its last element as largest, since sorting places the maximum value at the end.
// Start from index n - 2 and move backward while the current value equals largest, as duplicate copies of the maximum cannot be considered distinct.
// Return the first value that is smaller than largest, since it is the greatest distinct value below the maximum.
// If no such value is found, return -1 because the array contains fewer than two distinct values.

// Complexity:
// Time: \(O(n\log n)\), sorting ki wajah se.
// Space: \(O(n)\), copied vector ki wajah se.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9, 9, 2, 5, 6, 2, 1};

    int n = arr.size();

    if (n < 2) {
        cout << -1;
        return 0;
    }

    vector<int> sortArr = arr;
    sort(sortArr.begin(), sortArr.end());

    int largest = sortArr[n - 1];
    int secLargest = -1;

    for (int i = n - 2; i >= 0; i--) {
        if (sortArr[i] < largest) {
            secLargest = sortArr[i];
            break;
        }
    }

    cout << secLargest;

    return 0;
}

// Better Approach
// Sorting the entire array is unnecessary because only the largest and second-largest distinct values matter.
// The largest value can be identified in the first traversal. A second traversal can then ignore every occurrence of the largest value and retain the greatest remaining value.

// Algorithm
// Store the array size in n. If n < 2, return -1 because a second distinct value cannot exist.
// Initialize largest with nums[0] and traverse the array once to find the maximum value.
// Keep secondLargest for the best valid candidate and hasSecond to indicate whether such a candidate has been found. The flag avoids relying on a fixed sentinel value.
// Traverse the array again and consider only values strictly smaller than largest, since values equal to the maximum do not satisfy the distinctness requirement.
// If no second-largest candidate exists yet, or the current value is greater than secondLargest, update secondLargest and mark hasSecond as true.
// Return secondLargest when a valid candidate exists; otherwise, return -1.

// Complexity analysis
// Time: \(O(n)\) — two traversals, each taking linear time.
// Auxiliary space: \(O(1)\) — only a few variables are used.

#include <bits/stdc++.h>
using namespace std;

int main1() {
    vector<int> nums = {9, 9, 2, 5, 6, 2, 1};
    int n = nums.size();

    if (n < 2) {
        cout << -1;
        return 0;
    }

    int largest = nums[0];

    // First traversal: Find the largest element
    for (int i = 1; i < n; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    int secondLargest = 0;
    bool hasSecond = false;

    // Second traversal: Find the second-largest distinct element
    for (int i = 0; i < n; i++) {
        if (nums[i] < largest) {
            if (!hasSecond || nums[i] > secondLargest) {
                secondLargest = nums[i];
                hasSecond = true;
            }
        }
    }

    if (hasSecond) {
        cout << secondLargest;
    } else {
        cout << -1;
    }

    return 0;
}

// Optimal Approach
// Both required values can be maintained during a single traversal.
// Start with the first array element as the current largest value. Whenever a larger value appears, the previous largest becomes the second-largest candidate before the new value replaces it.
// If the current value is smaller than the largest, it can become the second largest only when no valid candidate exists yet or when it is greater than the current second-largest value.
// Values equal to the largest are ignored because the required answer must be distinct.

// Algorithm
// Store the array size in n. If n < 2, return -1 because two distinct values cannot exist.
// Initialize largest with nums[0]. Keep secondLargest for the second-largest candidate and hasSecond to track whether a valid candidate has been found.
// Traverse the array from index 1, since the first element has already been used to initialize largest.
// If the current value is greater than largest, move the previous largest into secondLargest before updating largest. The previous maximum now becomes the best value strictly below the new maximum.
// Otherwise, if the current value is strictly smaller than largest, update secondLargest when no candidate exists yet or when the current value is greater than the existing candidate. Values equal to largest are ignored to preserve distinctness.
// Return secondLargest when hasSecond is true; otherwise, return -1.

// Complexity comparison
// Approach	Time	Extra space
// Brute force (sorting)	\(O(n\log n)\)	\(O(n)\)
// Better (two traversals)	\(O(n)\)	\(O(1)\)
// Optimal (one traversal)	\(O(n)\)	\(O(1)\)

#include <bits/stdc++.h>
using namespace std;

int main2() {
    vector<int> nums = {9, 9, 2, 5, 6, 2, 1};
    int n = nums.size();

    if (n < 2) {
        cout << -1;
        return 0;
    }

    int largest = nums[0];
    int secondLargest = 0;
    bool hasSecond = false;

    for (int i = 1; i < n; i++) {
        if (nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
            hasSecond = true;
        }
        else if (nums[i] < largest) {
            if (!hasSecond || nums[i] > secondLargest) {
                secondLargest = nums[i];
                hasSecond = true;
            }
        }
    }

    if (hasSecond) {
        cout << secondLargest;
    } else {
        cout << -1;
    }

    return 0;
}