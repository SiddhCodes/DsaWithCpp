#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int countOfOddNumbers = 0;

    for (int value : arr) {
        if (value % 2 != 0) {
            countOfOddNumbers++;
        }
    }

    cout << countOfOddNumbers << endl;

    return 0;
}